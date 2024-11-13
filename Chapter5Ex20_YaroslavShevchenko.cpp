/*

Tite Chapter 5 Exercise 20 - Random number Guessing Game
File name:Chapter5Ex20_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 11/13/2024
Requirements:

Write a program that generates a random number and asks the user to guess what the number is.

If the user’s guess is higher than the random number, the program should display “Too high, try again.”

If the user’s guess is lower than the random number, the program should display “Too low, try again.”

The program should use a loop that repeats until the user correctly guesses the random number.


*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int randomNum();
void guess(int rn, int gn);


int main()
{
    int realN = randomNum();
    int guessedN = -1;

    while (guessedN != realN) {
        cout << "guess the number (0-99): ";
        cin >> guessedN;
        guess(realN, guessedN);
    }
    
}

int randomNum() {
    srand(time(0));
    int random = rand() % 100;
    return random;
}

void guess(int rn, int gn) {
    if (rn < gn) {
        cout << "The number is too high\n";
    }
    else if (rn > gn) {
        cout << "The number is too low\n";
    }
    else cout << "correct! The  number is: " << rn;
}

