//
// Created by John Carlo Cabanilla on 10/2/2021.

#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int totalChar;
int numSpace = 0;

/* Define your functions here. */


//Start of PrintMenu
void  PrintMenu(){
    cout<<"MENU"<<endl;
    cout<<"c - Number of non-whitespace characters"<<endl;
    cout<<"w - Number of words"<<endl;
    cout<<"f - Find text"<<endl;
    cout<<"r - Replace all !'s"<<endl;
    cout<<"s - Shorten spaces"<<endl;
    cout<<"q - Quit"<<endl;
    cout<<endl;


}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Start of non-Whitespace Characters Count
int  GetNumOfNonWSCharacters(string c){
    int i;
    int cSize = c.size();
    for(i = 0;i < cSize; i++){
        totalChar+=1;
        if(c[i]==' '){
            numSpace+=1;
        }
    }

    return totalChar - numSpace;
    //cout<<"Number of non-whitespace characters: "<<totalChar - numSpace<<endl;
    /*  cout<<"Total Characters with Space : "<<totalChar<<endl; */
    //   cout<<"Number of Words : "<<numSpace+1<<endl;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Start of GetNumOfWords(c)
int GetNumOfWords(string c){
    int Numwords=1;
    int cSize=c.size();

    if(c[0] ==' '){
        c.erase(0,1);
    }
    for(int i=cSize;i>0;i--){
        if(c[i]==' '){
            if(c[i+1]==' '){
                c.erase(i+1,1);
            }
            else if(c[i+1]=='.'){
                c.erase(i,1);
            }
            else if(c[i+1]==','){
                c.erase(i,1);
            }
        }

    }

    for(int j=0;j<cSize;j++){
        if(c[j]==' '){
            Numwords+=1;
        }

    }

    cout<< "Number of words: "<< Numwords <<endl<<endl;
    return Numwords;
}

/////////////////////////////////
//Start of FindText()
int FindText(string keyword ,string c){
    int numberOfInstances = 0;
    int lettersMatched = 0;
    int i =0;
    int j = 0;
    while(i<c.size()){
        if(c[i]==keyword[0]){
            for(j=0;j<keyword.size();j++){
                if(c[i+j] != keyword[j]){
                    //
                    break;
                }
            }
            if(j == keyword.size()){
                if(isspace(c[i+j]) || ispunct(c[i+j])||c[i+j]=='\0'){
                    numberOfInstances++;
                    i+=j;
                }
            }
        }
        else{
            while(isspace(c[i])==0 && ispunct(c[i])==0 && c[i] != '\0'){
                i++;
            }
        }
        i++;
    }

    cout<<"\""<< keyword<<"\"" <<" instances: " << numberOfInstances<<endl<<endl;
    return numberOfInstances;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Start of ReplaceExclamation()
string ReplaceExclamation(string c){
    string newString = c;
        for(int j=0;j<c.size();j++){

            if(c[j]=='!'){
                newString[j]= '.';
            }
        }
     //   cout<< newString;
    return newString;
}
//////////////////////////////////
//start of ShortenSpace()

string  ShortenSpace(string c){

    if(c[0] ==' '){
           c.erase(0,1);
    }
    for(int i=c.size();i>0;i--){
        if(c[i]==' '){
            if(c[i+1]==' '){
                c.erase(i+1,1);
            }
            else if(c[i-1]=='.'){
                c.erase(i,1);
            }
            else if(c[i-1]==','){
                c.erase(i,1);
            }
            else if(c[i-1]==';'){
                c.erase(i,1);
            }
        }

    }

    return c;
}
//Start of ExecuteMenu()

void ExecuteMenu(char k, string c){
    string keyword;
    string newC;
    if(k=='c'){
        cout<< "Number of non-whitespace characters: " <<   GetNumOfNonWSCharacters(c) <<endl<<endl;
    }
    else if(k=='w'){
        GetNumOfWords(c);
    }
    else if (k == 'f'){
        cin.ignore();
        cout<<endl<<"Enter a word or phrase to be found:"<<endl;
        getline(cin,keyword);
        FindText(keyword,c);
    }
    else if(k=='r'){
        string repExclamation = ReplaceExclamation(c);
        cout<<"Edited text: "<< repExclamation <<endl<<endl;

    }else if(k=='s'){
        newC = ShortenSpace(c);
       cout <<"Edited text: "<< newC <<endl <<endl;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Start of Main
int main() {

    int strSize = 100000;
    char c[strSize];
    char selectKey;

    cout<<"Enter a sample text:"<<endl<<endl;
    cin.getline(c,strSize);
    cout<<"You entered: "<<c<<endl<<endl;

    while(selectKey!='q'){
        PrintMenu();
        cout<<"Choose an option:"<<endl;
        cin>>selectKey;

        ExecuteMenu(selectKey,c);
    }

    return 0;


}
