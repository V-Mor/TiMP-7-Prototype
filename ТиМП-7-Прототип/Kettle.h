#pragma once

#include "Home_appliances.h"

class Kettle : public Home_appliances
{
public:
	Home_appliances * clone();
	void use();
};