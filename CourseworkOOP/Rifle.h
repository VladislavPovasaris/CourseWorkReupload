#pragma once
#include "NonAutomatic.h"
class Rifle : public NonAutomatic
{
public:
	Rifle();
	Rifle(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo);
	std::string GetDescription() override;
};
