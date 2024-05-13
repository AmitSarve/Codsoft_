#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int number = 0;
    int guess = 0;
    

    srand(time(0));            // seed the random number generator
    number = rand() % 100 + 1; // generate a random number between 1 and 100

    cout << "Welcome to the number guessing game!" << endl;
    cout << "Guess a number between 1 and 100: ";

    do
    {
        cin >> guess;
         if (guess < number)
        {
            cout << "Too low..... ";
        }
        else if (guess > number)
        {
            cout << "Too high..... ";
        }
    } 
    while (guess != number);

    cout << "Congratulations! You guessed the correct number" << endl;

    return 0;
}