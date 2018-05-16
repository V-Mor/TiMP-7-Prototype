#pragma once

#include "Home_appliances.h"

class Hoover : public Home_appliances
{
public:
	Home_appliances * clone();
	void use();
};