#include <iostream>

using namespace std;

// Jinyao Zhu, Guessing Game
/* The computer will pick a random number 0-100 inclusive. The user will guess. and the computer will tell you if it's too high or too low.
	Once correctly guessed, it will display how many guesses it took and ask if you want to play again.

	1. No global variables
    2. No strings
    3. Include <iostream>

*/

int main()
{
  srand(time(NULL)); // Set a random seed
  char play = 'y';
  // While playing:
  while (play=='y') { 
	int num_of_guesses = 0; // Track the number of guesses
    int rand_num = rand()%101; // Generate a random number
    int guess;
	// If guess is not correct, let the user guess again
    while (guess != rand_num) {
		cout << "Enter your guess: ";
		cin >> guess;
		num_of_guesses++; // Increase number of guesses by 1
        // If the guess is too high:
		if (guess > rand_num) {
        cout << "Guess too high!" << endl;
        }
        // If the guess is too low:
		if (guess < rand_num) {
        cout << "Guess too low!" << endl;
        }
    }
	// Show how many guesses it took and let the user play again if they want
    cout << "Good job! It took " << num_of_guesses << " guesses" << endl;
	cout << "Play again? (y/n) ";
    cin >> play;
  }
  return 0;
}
