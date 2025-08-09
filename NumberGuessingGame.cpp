#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function for limited guesses (6 tries)
void limitedGuesses() {
    int target, guess;
    srand(time(0));
    target = rand() % 100 + 1;

    cout << "\nI have a number between 1 and 100. Can you guess it?\n";
    cout << "You have 6 tries.\n";

    for (int attempt = 1; attempt <= 6; attempt++) {
        cout << "Attempt " << attempt << ": ";
        cin >> guess;

        if (guess < target) {
            cout << "Too low!\n";
        }
        else if (guess > target) {
            cout << "Too high!\n";
        }
        else {
            cout << "Congratulations! You guessed the number in " << attempt << " tries.\n";
            return;
        }
    }
    cout << "You have lost. The number was " << target << ".\n";
}

// Function for unlimited guesses
void unlimitedGuesses() {
    int target, guess, attempts = 0;
    srand(time(0));
    target = rand() % 100 + 1;

    cout << "\nI have a number between 1 and 100. Can you guess it?\n";
    cout << "Unlimited attempts allowed.\n";

    do {
        attempts++;
        cout << "Attempt " << attempts << ": ";
        cin >> guess;

        if (guess < target) {
            cout << "Too low!\n";
        }
        else if (guess > target) {
            cout << "Too high!\n";
        }
    } while (guess != target);

    cout << "You guessed the number in " << attempts << " tries.\n";
}

int main() {
    int choice;

    cout << "===== Number Guessing Game =====\n";
    cout << "1. Limited guesses (6 tries)\n";
    cout << "2. Unlimited guesses\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        limitedGuesses();
    }
    else if (choice == 2) {
        unlimitedGuesses();
    }
    else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
