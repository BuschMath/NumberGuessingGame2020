#include <stdlib.h>		// srand() and rand()
#include <time.h>		// time()
#include <iostream>

using namespace std;

void SuccessMessage();

int main()
{
	srand(time(NULL));

	int rNum = rand() % 10 + 1;
	int guess;

	cout << rNum;

	cout << "\nRandom number guessing game!\n" << "Please enter a number between 1 and 10 to as your first";
	cout << " guess of the random number : ";

	cin >> guess;

	if (guess != rNum)
	{
		cout << "\n\nIncorrect, please enter your second guess between 1 and 10: ";

		cin >> guess;

		if (guess != rNum)
		{
			cout << "\n\nIncorrect, please enter your third guess between 1 and 10: ";

			cin >> guess;

			if (guess != rNum)
			{
				cout << "\n\nIncorrect, you lose.";

				return 0;
			}
			else
				SuccessMessage();
		}
		else
			SuccessMessage();
	}
	else
		SuccessMessage();

	return 0;
}

void SuccessMessage()
{
	cout << "Congrats, you guessed correctly.\n";
}