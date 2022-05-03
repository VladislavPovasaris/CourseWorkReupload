#pragma once
#include "Iweapon.h"
#include "Ammo.h"
#include <string>
#include <iostream>
#include <stack>
class FirearmBase : public Iweapon
{
protected:
	std::string name;
	Ammo ammunition;
	int magazine_capacity;
	std::stack<Ammo> magazine;
	int amount_of_ammo;
	double weapon_health = 100.0;

public:
	FirearmBase();
	FirearmBase(std::string name, const Ammo &ammunition, int magazine_capacity, int amount_of_ammo);
	std::string GetStats() override;
	std::string Repair() override;
	std::string Reload() override;
	std::string CheckMagazine() override;
	std::string CheckAmmo() override;
	std::string AddAmmo(int amount_of_ammo) override;
	double GetDamage() override;
	virtual std::string CheckAuto() = 0;
	bool operator ==(const FirearmBase& other);
	bool operator >(const FirearmBase& other);// according to the power(damage) of the ammunition
	bool operator <(const FirearmBase& other);// according to the power(damage) of the ammunition
};

