#pragma once

#include "Fridge.h"
#include "Hoover.h"
#include "Kettle.h"

class Home_appliances
{
	static class Fridge fridge;
	static class Kettle kettle;
	static class Hoover hoover;
	virtual void use() = 0;
	virtual Home_appliances * clone() = 0;
	static Home_appliances * getAppliance(int);
};