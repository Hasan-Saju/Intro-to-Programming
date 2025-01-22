#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;

   cin >> phoneNumber;
   
   /* Type your code here */
   int areaCode = phoneNumber/10000000;
    int prefix = (phoneNumber%10000000)/10000;
   int lineNumber = phoneNumber%10000; 
   
   cout<<"("<<areaCode<<") "<<prefix<<"-"<<lineNumber<<"\n";
   return 0;
}
