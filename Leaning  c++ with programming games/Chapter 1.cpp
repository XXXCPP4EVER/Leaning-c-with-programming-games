
// guess the number game
#include "Chapter1.h"
void Hello()
{
	cout << "Welcome to guess the number game" << endl;
	cout << " " << endl;
	cout << "you need guess the number  from 1 to 100 include" << endl;
	cout << " " << endl;
	cout << "For beginner, you have been accrued 100$" << endl;
	cout << " " << endl;
	cout << "With every attempt you money will be decreased, but with every attempt randomly" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "Good Luck!!!" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
}

void generate_secret_num()
{
	
	srand(static_cast <unsigned int> (time(0))); // run the random number generator
	secret_number = rand() % 100 + 1; //  to generate the random number 

}

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
	switch (tries)
	{
	case 1:
		tries = 4;
		money *= 2;
		break;
	case 2:
		tries = 7;
		money += 30;
		break;
	case 4:
		tries = 9;
		money += 10;
		break;
	case 5:
		tries = 1;
		money *= 100;
		break;
	case 6:
		tries = 5;
		money += 50;
		break;
	default:
		break;
	}
	if (tries <= 8)
		money += 50;

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
	money_paid();
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
	}
}

int main()
{
	
	main_circle();

	return 0;
}