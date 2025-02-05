#include <iostream>
#include <string>
using namespace std;

int main() {
	int strokes;
	int par;
	string name;

	cin >> strokes;
	cin >> par;

	// Handle the error condition first.
	if (par < 3 || par > 5) {
		name = "Error";
	}
	// Check each of the four other possibilities.
	else if (strokes == par - 2) {
		name = "Eagle";
	}
	else if (strokes == par - 1) {
		name = "Birdie";
	}
	else if (strokes == par) {
		name = "Par";
	}
	else if (strokes == par + 1) {
		name = "Bogey";
	}
	else {
		name = "Error";
	}

	cout << "Par " << par << " in " << strokes << " strokes is " << name << endl;

	return 0;
}