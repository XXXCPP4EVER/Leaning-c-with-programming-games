#include "main_circle.h"
#include "Hello.h"
#include "Gen secret number.h"
#include "one_game_circle.h"
#include "Game_End.h"
#include "Money Paid.h"
inline void main_circle()
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