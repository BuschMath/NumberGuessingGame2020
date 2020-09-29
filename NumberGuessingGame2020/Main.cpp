#include <stdlib.h>		// srand() and rand()
#include <time.h>		// time()
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int rNum = rand() % 10 + 1;
	int guess;

	cout << rNum;

	cout << "Random number guessing game!\n" << "Please enter a number between 1 and 10 to guess the random number: ";

	cin >> guess;

	if (guess == rNum)
		cout << "Congrats, you guessed correctly.\n";
	else
		cout << "Incorrect, you lose.\n";

	return 0;
}