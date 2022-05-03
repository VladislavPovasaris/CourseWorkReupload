#include "AutomaticRifle.h"

AutomaticRifle::AutomaticRifle() : Automatic()
{
}
AutomaticRifle::AutomaticRifle(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo) : Automatic(name, ammunition, magazine_capacity, amount_of_ammo)
{
}

std::string AutomaticRifle::GetDescription()
{
	return "This weapon is of automatic rifle type. \n \n";
}


