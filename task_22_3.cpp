#include <iostream>
#include <string>
using namespace std;

int main() {
   unsigned int i = 0;
   string inputPassword;
   string endChar = "!";
   
   cin >> inputPassword;
   
   while (i < inputPassword.size()) {
      if (inputPassword.at(i) == 'i') {
         inputPassword.at(i) = '1';
      }
      else if (inputPassword.at(i) == 'a') {
         inputPassword.at(i) = '@';
      }
      else if (inputPassword.at(i) == 'm') {
         inputPassword.at(i) = 'M';
      }
      else if (inputPassword.at(i) == 'B') {
         inputPassword.at(i) = '8';
      }
      else if (inputPassword.at(i) == 's') {
         inputPassword.at(i) = '$';
      }
      
      ++i;
   }
   
   inputPassword += endChar;
   cout << inputPassword << endl;

   return 0;
}