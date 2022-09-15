#include "Includes.h"
#include "Game.h"

using namespace std;

void Game::Run() {
	int num, guess, tries = 0;
	bool stopCheck = 0;
	srand(time(0));
	num = rand() % 100 + 1;
	cout << "Gissa nummer spelet\n";
	do {

		do
		{
			cout << "Gissa ett nummer mellan 1 och 100.\n";
			cin >> guess;
			tries++;
			cin.get();

			if (guess > num)
				cout << "Too high!\n";
			else if (guess < num)
				cout << "Too low!\n";
			else
				cout << "\nKorrekt! Bra jobbat!\n Det tog bara " << tries << " gissningar!\n";

		} while (guess != num);

		if (cin.get()) {
			stopCheck = true;
		}
	} while (guess != num && stopCheck);

}