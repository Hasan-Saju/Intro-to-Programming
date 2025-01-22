#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double value;

	/* Type your code here */
    cin>>value;
	double root = sqrt(value);
    cout << fixed << setprecision(2);
    cout<<"Square root of "<<value<<" = "<<root<<"\n";
	return 0;
}