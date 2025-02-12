#include <iostream>
#include <string>
using namespace std;

int main() {
   char inputChar;
   string inputString;
   int numChars = 0;
   
   cin >> inputChar;
   getline(cin, inputString); 
  
   for(int i=0; i<inputString.size(); i++)
   {
    if(inputString[i]==inputChar)
    numChars++;
   }

   cout << numChars << " " << inputChar;
   
   if (numChars != 1) {
      cout << "'s";
   }
   cout << endl;

   return 0;
}