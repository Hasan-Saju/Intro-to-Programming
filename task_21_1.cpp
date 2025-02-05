#include <iostream>
using namespace std;

int main() {
   int redAmount;
   int greenAmount;
   int blueAmount;
   int minValue;
   
   // Get rgb color values
   cin >> redAmount;
   cin >> greenAmount;
   cin >> blueAmount;
   
   // Find minimum value
   minValue = redAmount;
   if (greenAmount < minValue) {
      minValue = greenAmount;
   }
   if (blueAmount < minValue) {
      minValue = blueAmount;
   }
   
   // Subtract minimum value from all colors, thus removing any gray
   redAmount = redAmount - minValue;
   greenAmount = greenAmount - minValue;
   blueAmount = blueAmount - minValue;
   
   // Output new color values with gray removed
   cout << redAmount << " " << greenAmount << " " << blueAmount << endl;
   
   return 0;
} 
