#pragma once
#include <string>
#include <iostream>
class Ammo
{
protected:
	std::string name;
	double damage;
	double damage_to_weapon;
public:
	Ammo();
	Ammo(std::string name, double damage, double damage_to_weapon);
	Ammo(const Ammo& other);
	std::string GetAmmoName();
	double GetDamage();
	double GetDamageToWeapon();
	bool operator==(const Ammo& other);
	void operator=(const Ammo& other);
};

