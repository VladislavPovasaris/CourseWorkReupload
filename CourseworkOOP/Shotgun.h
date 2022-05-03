#pragma once
#include "NonAutomatic.h"
class Shotgun : public NonAutomatic
{
public:
	Shotgun();
	Shotgun(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo);
	std::string GetDescription() override;
};

