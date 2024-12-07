#include <iostream>

using namespace std;

int main ()
{
	int i,k;
	
	for (int i = 0; i < 8; i++){
		for (int k = 0; k < i ; k++){
			cout << " ";
		}
		for (int k = 8 ; k > i; k--){
			if ((i+k) % 2 == 0){
				cout << "@";
			}
			else if ((i+k) % 2 == 1){
				cout << "$";
			}
			else if ((i+k) % 3 == 2){
				cout << "#";
			}
		}
		cout << endl;
		}
}