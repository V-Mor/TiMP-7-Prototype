#include "Hoover.h"

Home_appliances * Hoover::clone()
{
	return new Hoover();
}

void Hoover::use()
{
	cout << "пропылесосил комнату\n";
}
