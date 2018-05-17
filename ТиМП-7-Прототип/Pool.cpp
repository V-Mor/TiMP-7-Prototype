#include "Pool.h"

Home_appliances * Pool::getAppliance(Appliances arg)
{
	if (pool.find(arg) != pool.end())
		return pool[arg]->clone();
	else
		return nullptr;
	return NULL;
}

void Pool::addAppliance(Appliances arg, Home_appliances * obj)
{
	if (pool.find(arg) == pool.end())
		pool.insert({ arg, obj });
	else
		cout << "Такой прототип уже есть\n";
}
