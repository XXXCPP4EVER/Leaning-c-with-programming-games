#include "Money Paid.h"

inline void money_paid()
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