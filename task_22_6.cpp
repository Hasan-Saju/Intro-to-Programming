#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

   /* Type your code here. */

string userInput;
   int inputStart;
   int inputEnd;
   bool isPalindrome;
   
   
   getline(cin, userInput);

   string copy = userInput;
   userInput = "";

   for(int i=0; i<copy.size(); i++)
   {
    if(copy[i]!=' ')
        userInput+=copy[i];
   }


    isPalindrome = true;
   for(int i=0, j=userInput.size()-1; i<=j; i++, j--)
   {
        if(userInput[i]!=userInput[j])
            isPalindrome = false;
   }

    if (isPalindrome) {
      cout << "palindrome: " << copy <<  endl;
   }
   else if (!isPalindrome) {
      cout << "not a palindrome: " << copy  << endl;
   }
   return 0;
}
