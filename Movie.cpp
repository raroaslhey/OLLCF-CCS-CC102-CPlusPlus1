#include <iostream>

using namespace std;

int main() {
    int age;
    string withParents;
    double money;
    
    //Input: Age, Parent Status, and Money
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with your parents? [y/n]: ";
    cin >> withParents;
    cout <<"Enter the amount of money you have: ";
    cin >> money;
    
    //Identify Movie Ratings
    string movies;
    if (age < 13 ) {
        if (withParents == "y") {
            movies = "G,PG";
        } else {
            movies = "G";
        }
    } else if (age >= 13 && age < 16) {
        if (withParents == "y") {
            movies = "G,PG,R";
        } else {
            movies = "G,PG";
        }
    } else if (age >= 16) {
        movies = "G,PG,R";
    }
    
    //Identify available showtimes
    string showtimes;
    if (money >= 10.50) {
        showtimes = "Evening and Marinee.";
    } else if (money >= 7.50 && money < 10.50) {
        showtimes = "Matinee only.";
    } else {
        showtimes = "Not Enough money for any show.";
    }
    
    //Output Results
    
    cout << "Movies you can watch: " << movies << endl;
    cout << "Available Showtimes: " << showtimes << endl;
    
    return 0;
}
    
