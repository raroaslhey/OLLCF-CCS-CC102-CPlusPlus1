#include <iostream>

using namespace std;

int main (){
    double temperature;
    
    cout << "Enter current Temperature in degrees: ";
    cin >> temperature;
    
    if (temperature <32){
        cout << "Bring a heavy jacket.";
    }else if (temperature > 32 && temperature <= 50) {
        cout << "Bring a light jacket.";
    }else if (temperature > 50) {
        cout << "Do not bring any jacket.";
    }
    return 0;
}
