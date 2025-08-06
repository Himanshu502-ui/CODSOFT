#include <iostream>
#include <cstdlib> 
#include <ctime>    

using namespace std;

int main() {
   
    srand(time(0));
    
    // Generate a random number between 1 and 100
    int secretNum = rand() % 100 + 1;
    int guess;
 cout << "Guess the number (between 1and 100): ";

    do {
        cin >> guess;

        if (guess < secretNum) {
            cout << "Too low! Try again: \n ";
            cout <<"the secret number was:"<< secretNum;
        } else if (guess > secretNum) {
            cout << "Too high! Try again: \n ";
             cout << " The secret number was:"<< secretNum;
        } else {
            cout << "Congratulations! You guessed the correct number: " << secretNum << endl;
        }
    } while (guess != secretNum);

    return 0;
}

