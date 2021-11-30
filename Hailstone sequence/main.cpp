#include <iostream>
using namespace std;

int main() {
  int x;
  int y = 1;
  cout << "";
  cin >> x ;
   
   if(x == 1){
        cout << x << "\n";
      }
   else{
        cout<<x<<"\t";
        while(x!=1){
          if (y % 10 == 0) {
            cout << endl;
            }
          if(x % 2 == 0) {
             x = x / 2;
             y = y + 1;
           
              if(x == 1){
                  cout << x << "\n";
               }
              else {            
                  cout<<x <<"\t";
              }
           }
          else{
            x = (3 * x) + 1;
            y = y + 1;
              if(x == 1) {
                cout << x << "\n";
               }
              else{
                cout << x << "\t";
              }
           }
         }
  }

   return 0;
}
