#include "Shotgun.h"

Shotgun::Shotgun() : NonAutomatic()
{
}

Shotgun::Shotgun(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo) : NonAutomatic(name, ammunition, magazine_capacity, amount_of_ammo)
{
}

std::string Shotgun::GetDescription()
{
	return "This weapon is of shotgun type. \n \n";
}

