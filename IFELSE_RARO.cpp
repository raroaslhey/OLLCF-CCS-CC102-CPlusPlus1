#include <iostream>

using namespace std;

int main (){
	
	char choice;
	
	cout << "MASARAP KABA [y/n]:";
	cin >> choice;
	
	if (choice=='y'){
		cout << "ANG KAPAL NG MUKHA MO!";
	}
	else {
		cout << "BUTI ALAM MO";
	}
	return 0;
}