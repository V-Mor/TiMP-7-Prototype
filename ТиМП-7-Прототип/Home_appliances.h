#pragma once

#include <iostream>

using namespace std;

class Home_appliances
{
public:
	virtual Home_appliances * clone() = 0;
};
