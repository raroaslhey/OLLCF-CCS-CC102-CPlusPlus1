#include <iostream>

using namespace std;

int main ()
{
	char answer;
	cout << "Is it raining? [y=yes]: ";
	cin >> answer;
	if (answer == 'y') {
		 cout << "Get an umbrella.";
	}else if (answer == 'n') {
		cout << "It is sunny.";
	}
	return 0;
}