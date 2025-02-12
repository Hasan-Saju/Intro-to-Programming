#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;
   unsigned int i;
   bool foundNondigit;
   
   cin >> userString;
   
   foundNondigit = false;
   for (i = 0; i < userString.length(); ++i) {
      if (!isdigit(userString[i])) {
         foundNondigit = true;
      }
   }
   
   if (!foundNondigit) {
      cout << "Yes" << endl;
   }
   else {
      cout << "No" << endl;
   }

   
   return 0;
}
