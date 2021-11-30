#include <iostream>
#include <vector>

std::vector <int> rating;
std::vector <int> jerseyNumber;

int firstFive(){
    for(int i=0;i<5;i++){
        int x,y;
        std::cout<<"Enter player "<<i+1<<"'s jersey number:"<<std::endl;
        std::cin>>x;
        jerseyNumber.push_back(x);
        std::cout<<"Enter player " <<i+1<<"'s rating:"<<std::endl<<std::endl;
        std::cin>>y;
        rating.push_back(y);
    }
    return 0;
}

void menu(){
    std::cout<<"MENU"<<std::endl;
    std::cout<<"a - Add player"<<std::endl;
    std::cout<<"d - Remove player"<<std::endl;
    std::cout<<"u - Update player rating"<<std::endl;
    std::cout<<"r - Output players above a rating"<<std::endl;
    std::cout<<"o - Output roster"<<std::endl;
    std::cout<<"q - Quit"<<std::endl<<std::endl;
    std::cout<<"Choose an option:"<<std::endl;
}
void executeMenu(char key){
    if (key =='a' || key =='d' || key =='u' ||key =='r' ||key =='o'){
        if(key =='o'){
            std::cout<<"ROSTER"<<std::endl;
            for(int i=0;i< jerseyNumber.size();i++){
                    std::cout<<"Player "<<i+1 <<" -- Jersey number: " << jerseyNumber[i] <<", Rating: "<< rating[i]<< std::endl;
            }
            std::cout<<std::endl;
        }
        else if(key == 'a'){
            int newPlayer,newRating;
            //  std::cout<<std::endl;
            std::cout<<"Enter a new player's jersey number:"<<std::endl;
           std::cin>>newPlayer;
            std::cout<<"Enter the player's rating:"<<std::endl<<std::endl;
            std::cin>>newRating;
            jerseyNumber.push_back(newPlayer);
            rating.push_back(newRating);
            
        }
        else if(key == 'd'){
            int playerNumber;
            std::cout<<"Enter a jersey number:"<<std::endl;
            std::cin>>playerNumber;
            for(int i=0; i<jerseyNumber.size();i++){
                if(jerseyNumber[i]==playerNumber){
                  jerseyNumber.erase(jerseyNumber.begin()+i);
                  rating.erase(rating.begin()+i);
                }
            }
            
        }
         else if(key == 'u'){
            int playerNumber,newRating;
            std::cout<<"Enter a jersey number:"<<std::endl;
            std::cin>>playerNumber;
             std::cout<<"Enter a new rating for player:"<<std::endl;
            std::cin>>newRating;
            for(int i=0; i<jerseyNumber.size();i++){
                if(jerseyNumber[i]==playerNumber){
                    rating[i] = newRating;
                }
            }
            
        }
        else if(key == 'r'){
            int newRating;
            std::cout<<"Enter a rating:"<<std::endl;
            std::cin>>newRating;
           std::cout<<"ABOVE "<<newRating<<std::endl;
            for(int i=0; i<jerseyNumber.size();i++){
                
                    if(rating[i] > newRating){
                           std::cout<<"Player "<<i+1 <<" -- Jersey number: " << jerseyNumber[i] <<", Rating: "<< rating[i]<< std::endl;
                        
                    }
                
            }  
            std::cout<<std::endl;
            
        }
        else{};
    }
    return  ;
}

int main() {
    char key;
    firstFive();
    std::cout<<"ROSTER"<<std::endl;
    for(int i=0;i< jerseyNumber.size();i++){
        std::cout<<"Player "<<i+1 <<" -- Jersey number: " << jerseyNumber[i] <<", Rating: "<< rating[i]<< std::endl;
    }
    std::cout<<std::endl;
    while(key !='q'){
        menu();
        std::cin>> key;
       if(key!='q'){
            executeMenu(key);
        }

    }

    return 0;
}



