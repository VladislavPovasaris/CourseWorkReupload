#pragma once
#include <string>

class Iweapon
{
public:
	virtual std::string GetDescription() = 0;
	virtual std::string GetStats() = 0;
	virtual std::string Repair() = 0;
	virtual std::string ShootWholeMag() = 0;
	virtual std::string Shoot() = 0;
	virtual std::string Reload() = 0;
	virtual std::string CheckMagazine() = 0;
	virtual std::string CheckAmmo() = 0;
	virtual std::string AddAmmo(int amount) = 0;
	virtual double GetDamage() = 0;
};

