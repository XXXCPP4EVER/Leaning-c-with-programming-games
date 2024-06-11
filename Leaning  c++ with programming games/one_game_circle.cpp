# include "one_game_circle.h"
# include "Input number.h"
# include "Game logic.h"

inline void one_game_circle()
{
	do
	{
		tries++; // count of attempt
		input_num();
		game_logic();

	} while (secret_number != guess_number); //The loop runs until we guess the number
}