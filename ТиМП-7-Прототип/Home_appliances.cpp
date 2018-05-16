#include "Home_appliances.h"

Home_appliances * Home_appliances::getAppliance(int x)
{
	switch (x)
	{
	case 1: return fridge.clone(); break;
	case 2: return hoover.clone(); break;
	case 3: return kettle.clone(); break;
	default: return nullptr; break;
	}
}
