#pragma once
#include "FirearmBase.h"
#include <iostream>
#include <string>
class NonAutomatic : public FirearmBase
{
public:
	NonAutomatic();
	NonAutomatic(std::string name,const Ammo ammunition, int magazine_capacity, int amount_of_ammo);

	std::string ShootWholeMag() override;
	std::string Shoot() override;
	std::string CheckAuto() override;
};

