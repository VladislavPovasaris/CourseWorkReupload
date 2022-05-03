#include "Rifle.h"

Rifle::Rifle() : NonAutomatic()
{
}

Rifle::Rifle(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo) : NonAutomatic(name, ammunition, magazine_capacity, amount_of_ammo)
{
}

std::string Rifle::GetDescription()
{
	return "This weapon is of rifle type. \n \n";
}