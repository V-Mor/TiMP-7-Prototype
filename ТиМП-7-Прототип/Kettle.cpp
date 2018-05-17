#include "Kettle.h"

Home_appliances * Kettle::clone()
{
	return new Kettle();
}

void Kettle::use()
{
	cout << "Согрел воду\n";
}
