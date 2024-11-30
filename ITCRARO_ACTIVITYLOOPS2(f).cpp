#include <iostream>

using namespace std;

int main() {
    // STEP 1: USER INPUTS FOR THREE SYMBOLS
    char symbol1, symbol2, symbol3;
    cout << "Enter 1st symbol to use (*, ^, #, $, @): ";
    cin >> symbol1;
    cout << "Enter 2nd symbol to use (*, ^, $, @): ";
    cin >> symbol2;
    cout << "Enter 3rd symbol to use (*, $, @): ";
    cin >> symbol3;

    // DISPLAY SYMBOLS
    cout << "You picked: " << symbol1 << " " << symbol2 << " " << symbol3 << "\n";

    // FOR F:
	cout << "\nPattern f:\n";

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			cout << " " << symbol1;
		}
		cout << " ";
		for (int j = i + 1; j < 10; j++) {
			cout << " " << symbol1;
		}
		cout << endl;
}
	// FOR G:
	cout << "\nPattern g:\n";
	
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) {
            cout << "  ";
        }
        for (int j = 0; j < 10; j++) {
            cout << " " << symbol2;
        }
        cout << endl;
}
	// FOR H:
	cout << "\nPattern h:\n";
	
	 for (int i = 0; i <= 6; i++) {
      for (int j = 0; j < i; j++) {
         cout << " " <<symbol1;
      }
      cout << " " <<symbol2 << endl;
   }
   for (int i = 6; i >= 0; i--) {
      for (int j = 0; j < i; j++) {
         cout << " " <<symbol1;
		}
        cout << " " <<symbol2 << endl;
   
}



	// FOR I:
	cout << "\nPattern i:\n";

	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 10; j++) {
			cout << " ";
		}
		for(int j = 0; j < i; j++) {
			cout << "^";
		}
		for(int j = 0; j < 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	// middle pattern
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			cout << "#";
		}
		for(int j = 0; j < 6; j++) {
			cout << "^";
		}
		for (int j = 0; j < 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 10; j++) {
			cout << " ";
		}
		for(int j = i; j < 5; j++) {
			cout << "^";
		}
		for(int j = 0; j < 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

// This program was created with the assistance of my classmate and online tutorials. 
// I am still learning and working to better understand how loops, particularly for loops, function.
