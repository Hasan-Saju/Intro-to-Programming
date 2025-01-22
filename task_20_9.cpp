#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int numPizza;
	double subTotal;
	double totalDue;
    double price=14.99;
	
	/* Type your code here */
    cin>>numPizza;
    cout<<fixed<<setprecision(2);
    cout<<"Pizzas: "<<numPizza<<"\n";
    cout<<"Subtotal: $"<<numPizza*price<<"\n";
    cout<<"Total due: $"<<numPizza*price*1.08<<"\n";
	
	return 0;
}