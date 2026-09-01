#include <iostream>

using namespace std;

int main()
{
  int input = 0;
  srand(time(NULL));
  int num_of_guesses = 0;
  char play = 'y';
  while (play=='y') {
    int rand_num = rand()%101;
    cout << "Random number:" << rand_num << endl;
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;
    while (guess != rand_num) {
      if (guess > rand_num) {
        cout << "Guess too high!" << endl;
	num_of_guesses++;
	cout << "Enter your guess:";
	cin >> guess;
      }
      else {
        cout << "Guess too low!" << endl;
	num_of_guesses++;
	cout << "Enter your guess:";
	cin >> guess;
      }
    }
    cout << "Good job. Play again? (y/n) ";
    cin << play;
  }
  return 0;
}
