#include <iostream>

using namespace std;

int main ()
{
	char answer;
	cout << "Is it raining? [y=yes]: ";
	cin >> answer;
	if (answer == 'y') {
		 cout << "Get an umbrella.";
	}else (answer == 'n') {
		cout << "Invalid input.";
	}
	return 0;
}