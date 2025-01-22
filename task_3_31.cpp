#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* Type your code here. */
    int age, weight, heart_rate, time;
    cin>>age>>weight>>heart_rate>>time;

    float calories = (( (age*0.2757) + (weight*0.03295) + (heart_rate*1.0781) - 75.4991 ) * time )/8.368;
    cout << fixed << setprecision(2);
    cout<< "Calories: " <<calories<<" calories";
   return 0;
}
