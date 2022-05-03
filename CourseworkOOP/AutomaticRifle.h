#pragma once
#include "Automatic.h"
class AutomaticRifle : public Automatic 
{
	public:
	AutomaticRifle();
	AutomaticRifle(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo);

	std::string GetDescription() override;
};

