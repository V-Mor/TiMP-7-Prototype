#include "Pool.h"
#include "Home_appliances.h"
#include "Fridge.h"
#include "Hoover.h"
#include "Kettle.h"

int main()
{
	setlocale(0, "");
	Pool p;
	p.addAppliance(fridge, new Fridge);
	Home_appliances *fr = p.getAppliance(fridge);
	fr->use();
	return 0;
}