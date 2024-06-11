
// guess the number game
#include "Main.h"
#include "Hello.cpp"
#include "Gen secret number.cpp"



void input_num()
{
	cout << "Please, press the number from 1 to 100" << endl;
	cout << " " << endl;
	cout << "Money = " << money << endl;
	cout << " " << endl;
	cin >> guess_number;
}

void game_logic()
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

void money_paid()
{
	/*if (tries == 1)
	{
		cout << "JACKPOT";
		money *= 10;
	}*/
	if (tries <= 4)
	{
		money *= 4;
		if (tries == 1)
		{
		cout << "JACKPOT";
		money *= 10;
		}
	}
		
	if (tries <= 7)
		money += 50;

	if (tries <= 8)
		money += 40;

	if (tries <= 10)
		money += 30;

	else
		cout << "You don't paid" << endl;

	cout << "Money = " << money << "$" << endl;
}

void Game_End()
{
	
	cout << "you guessed!!!" << endl;
	cout << " " << endl;
	cout << "Gussed number = " << secret_number << endl;
	cout << " " << endl;
	cout << "Number of attempt = " << tries << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "Thank you for the game!!!!! " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
}

void one_game_circle()
{
	do
	{
		tries++; // count of attempt
		input_num();
		game_logic();
		
	} while (secret_number != guess_number); //The loop runs until we guess the number
}



void main_circle()
{
	while (true)
	{
		Hello();
		generate_secret_num();
		one_game_circle();
		Game_End();
		money_paid();
	}
}

int main()
{
	
	main_circle();

	return 0;
}