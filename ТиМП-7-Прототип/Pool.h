#pragma once

#include <map>
#include <algorithm>
#include <iostream>
#include "Home_appliances.h"

enum Appliances {fridge = 0, hoover, kettle};

class Pool
{
	map<Appliances, Home_appliances*> pool;

public:
	Home_appliances * getAppliance(Appliances);
	void addAppliance(Appliances, Home_appliances*);
};