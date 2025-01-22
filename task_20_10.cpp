#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;
   int time;

   /* Type your code here. */
   cin>>time;
   hours = time/3600;
   minutes = (time%3600)/60;
  seconds = (time%3600)%60;

    cout<<"Seconds: "<<seconds<<"\n";
    cout<<"Minutes: "<<minutes<<"\n";
    cout<<"Hours: "<<hours<<"\n";
   return 0;
}