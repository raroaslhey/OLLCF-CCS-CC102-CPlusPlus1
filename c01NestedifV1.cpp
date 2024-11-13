#include <iostream>

using namespace std;

int main ()
{
	char answer;
	cout << "Is it raining? [y=yes, n=no]: ";
	cin >> answer;
	if (answer == 'y') {
		 cout << "Get an umbrella.";
		 cout << "Rainfall Warning [r=red,o=orange,y=yellow]:";
		 cin >> answer;
		 if (answer == 'r') {
			 cout << "Extreme: Landslide and Flooding are possible.";
		 }
		 else if (answer == 'o') {
			 cout << "Serious: Expected Flooding";
		 }
		 else if (answer == 'y') {
			 cout << "Moderate: Possible Flooding.";
		 }
		 else {
			 cout << "Invalid Input.";
		 }
	}
	else if (answer == 'n') {
		cout << "It is sunny.";
	}
	else {
		cout << "Invalid Input";
	}
	return 0;
}