#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   unsigned int i;
   int charCount;
   
   getline(cin, userText);  // Gets entire line, including spaces. 
   
   charCount = 0;
   for (i = 0; i < userText.length(); ++i) {
      if ( (userText.at(i) != ' ') && (userText.at(i) != '.') && (userText.at(i) != ',') 
         && (userText.at(i) != '!')) {
         charCount += 1;
      }
   }

   cout << charCount << endl;
   
   return 0;
}
