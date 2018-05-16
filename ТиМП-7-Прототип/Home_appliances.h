#pragma once
class Home_appliances
{
	virtual void use() = 0;
	virtual Home_appliances * clone() = 0;
};