#include "Handgun.h"

Handgun::Handgun() : NonAutomatic()
{
}

Handgun::Handgun(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo) : NonAutomatic(name, ammunition, magazine_capacity, amount_of_ammo)
{
}

std::string Handgun::GetDescription()
{
	return "This weapon is of handgun type. \n \n";
}



