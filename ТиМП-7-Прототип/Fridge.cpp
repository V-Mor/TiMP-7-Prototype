#include "Fridge.h"

Home_appliances * Fridge::clone()
{
	return new Fridge();
}

void Fridge::use()
{
	cout << "Заморозил еду\n";
}


