#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double radius;
	double height;
	double volume;
	double area;

	/* Type your code here */
    cout << fixed << setprecision(2);
    cin>>radius>>height;

    volume = M_PI*radius*radius*height;
    area = 2*M_PI*radius*height + 2*M_PI*radius*radius;

    cout<<"Volume (cubic inches): "<<volume<<"\n";
    cout<<"Surface area (square inches): "<<area<<"\n";
	
	return 0;
}