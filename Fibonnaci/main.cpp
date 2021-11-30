#include <iostream>
using namespace std;

int Fibonacci(int n) {
      int x = 0;
      int y = 1;
        if ( n%2 == 1 ){
             for( int i = 0 ; i<(n-1)/2 ; i++ ){
                  x = x + y;  
                   y = y + x;  
         }  
            n = y; 
        }       
         else{
             for( int i = 0 ; i<n/2 ; i++ ){
                  x = x + y; 
                  y = y + x; 
         }
            n = x;  
        }
            return n;
}
int main() {
   int startNum;
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;
   return 0;
}
