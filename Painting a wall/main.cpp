#include <iostream>
#include <cmath>                 
#include <iomanip>               
using namespace std;

int main() {
   double wallHeight;
   double wallWidth;
   double wallArea;
   double paintNeeded;

   cout << "Wall Paint Guide" << endl;
   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;
   cout << "Enter wall width (feet):" << endl;   
   cin  >> wallWidth;
   
             
  
                                         
   wallArea = wallHeight * wallWidth;       
   paintNeeded = wallArea / 350;            
   cout << "Wall area: "<< fixed << setprecision(2) << wallArea <<" square feet" << endl;  
   cout << "Paint needed: "<< fixed << setprecision(2) << paintNeeded <<" gallons" << endl;
   cout << "Cans needed: "<< fixed << setprecision(0) << ceil(paintNeeded) <<" can(s)" << endl;
  

   return 0;
}
