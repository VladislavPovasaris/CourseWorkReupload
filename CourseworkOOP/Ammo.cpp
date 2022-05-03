#include "Ammo.h"

Ammo::Ammo(std::string name, double damage, double damage_to_weapon)
{
	this->name = name;
	this->damage = damage;
	this->damage_to_weapon = damage_to_weapon;
}

double Ammo::GetDamage()
{
	return this->damage;
}

double Ammo::GetDamageToWeapon()
{
	return this->damage_to_weapon;
}
std::string Ammo::GetAmmoName()
{
	return this->name;
}
Ammo::Ammo(const Ammo& other)
{
	this->damage = other.damage;
	this->name = other.name;
	this->damage_to_weapon = other.damage_to_weapon;
}
Ammo::Ammo()
{
	this->name = "No info";
	this->damage = 0;
	this->damage_to_weapon = 0;
}
bool Ammo::operator==(const Ammo& other)
{
	if (this->name == other.name && this->damage == other.damage && this->damage_to_weapon == other.damage_to_weapon)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Ammo::operator=(const Ammo& other)
{
	this->damage = other.damage;
	this->damage_to_weapon = other.damage_to_weapon;
	this->name = other.name;
}
