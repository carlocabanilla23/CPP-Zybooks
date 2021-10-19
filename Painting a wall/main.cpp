#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
#include <iomanip>                 // For setprecision
using namespace std;

int main() {
   double wallHeight;
   double wallWidth;
   double wallArea;
   double  paintNeeded;
   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;
   cout << "Enter wall width (feet):" << endl;   // FIXED !  (1): Prompt user to input wall's width
   cin  >> wallWidth;
   
             
  
                                          // FIXED Calculate and output wall area
   wallArea = wallHeight*wallWidth;        //FIXED FIXME (1): Calculate the wall's area
    paintNeeded = wallArea / 350;            
   cout << "Wall area: "<<fixed<<setprecision(2)<<wallArea <<" square feet" << endl;  // FIXED FIXME (1): Finish the output statement
   cout << "Paint needed: "<<fixed<<setprecision(2)<< paintNeeded <<" gallons" << endl;
   cout << "Cans needed: "<<fixed<<setprecision(0)<< ceil(paintNeeded)<<" can(s)" << endl;
   // FIXED (2): Calculate and output the amount of paint in gallons needed to paint the wall

   // FIXED (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer

   return 0;
}
