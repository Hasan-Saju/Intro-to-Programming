#include <iostream>
#include <string> 
using namespace std;

int main() {
   string userString;
   int userNum;
   
   cin >> userString;
   cin >> userNum;
   
   while (userString != "quit") {
      cout << "Eating " << userNum << " " << userString << " a day keeps you happy and healthy." << endl;
      
      cin >> userString;
      cin >> userNum;
   }

   return 0;
}
