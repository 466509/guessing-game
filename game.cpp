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
  srand(time(NULL));
  char play = 'y';
  while (play=='y') {
	int num_of_guesses = 0;
    int rand_num = rand()%101;
    cout << "Enter your guess: ";
    int guess;
	cin >> guess;
    while (guess != rand_num) {
		cout << "Enter your guess: ";
		cin >> guess;
		num_of_guesses++;
      if (guess > rand_num) {
        cout << "Guess too high!" << endl;
      }
      if (guess < rand_num) {
        cout << "Guess too low!" << endl;
      }
    }
    cout << "Good job! It took " << num_of_guesses << " guesses" << endl;
	cout << "Play again? (y/n) ";
    cin >> play;
  }
  return 0;
}
