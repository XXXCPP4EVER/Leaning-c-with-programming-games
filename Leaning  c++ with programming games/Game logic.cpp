# include "Game logic.h"

inline void game_logic()
{
	if (guess_number > secret_number)
	{
		cout << " too much" << endl;
		cout << " " << endl;
		money -= rand() % 20 + 1;
	}
	else
	{
		cout << "too few" << endl;
		cout << " " << endl;
		money -= rand() % 20 + 1;
	}
}