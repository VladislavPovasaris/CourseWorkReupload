#pragma once
#include "NonAutomatic.h"
class Handgun : public NonAutomatic
{
public:
	Handgun();
	Handgun(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo);
	std::string GetDescription() override;
};

