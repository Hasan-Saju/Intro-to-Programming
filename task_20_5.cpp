#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   int wholeNumber;
   string pluralNoun;
   string genericLocation;
   
   /* Type your code here. */
   cin>>firstName>>wholeNumber>>pluralNoun>>genericLocation;
   cout << firstName << " buys " << wholeNumber << " different types of " << pluralNoun << " at " << genericLocation << "." << endl;

   return 0;
}