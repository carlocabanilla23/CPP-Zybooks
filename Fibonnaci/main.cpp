#include <iostream>
using namespace std;

int Fibonacci(int n) {
      
      int x =0;
      int y= 1;
     
        if (n%2==1){
              for(int i =0;i<(n-1)/2;i++){
         
         
             x= x+y;  //     1,3,8
            
            
            
             y=y+x;  //  2,5,13
           
      
             
             
         
         }
         
        n=y;
  
            
        }
////////////////////////////////////////        
         else{
              for(int i =0;i<n/2;i++){
         
         
             x= x+y;  //     1,3,8
            
            
            
             y=y+x;  //  2,5,13
           
      
             
             
         
         }
         
        n=x;
  
            
        }
    
      return n;
   
}

int main() {
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}
