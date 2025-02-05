#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;

   /* Type your code here. */
   cin>>seconds>>minutes>>hours;

   int total = seconds + minutes*60 + hours*3600;
    cout<<total<<" seconds"<<"\n";
   return 0;
}
