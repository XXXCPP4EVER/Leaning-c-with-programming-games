#include "Gen secret number.h"

inline void generate_secret_num()
{

	srand(static_cast <unsigned int> (time(0))); // run the random number generator
	secret_number = rand() % 100 + 1; //  to generate the random number 

}