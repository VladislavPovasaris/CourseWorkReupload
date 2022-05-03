#include "Automatic.h"

Automatic::Automatic(std::string name, const Ammo ammunition, int magazine_capacity, int amount_of_ammo) : FirearmBase(name, ammunition, magazine_capacity, amount_of_ammo)
{
}
std::string Automatic::ShootWholeMag()
{
	if (weapon_health > 0 && magazine.size() > 0)
	{
		double total_damage = 0;
		int size = magazine.size();
		for (int i = 0; i < size - 1; i++)
		{
			if (weapon_health <= 0)
			{
				return "\n \nWeapon is broken \n \n";
			}
			total_damage += ammunition.GetDamage();
			std::cout << "Boom ";
			weapon_health -= ammunition.GetDamageToWeapon()*2;
			magazine.pop();
		}
		total_damage += ammunition.GetDamage();
		std::cout << "Boom" << std::endl << std::endl;
		magazine.pop();
		return std::to_string(total_damage) + " damage done\n \n";
	}
	else if (weapon_health <= 0)
	{
		return "Weapon is broken \n \n";
	}
	else if (magazine.size() == 0)
	{
		return "No ammo in magazine \n \n";
	}
}
std::string Automatic::Shoot()
{
	if (weapon_health > 0 && magazine.size() > 0)
	{
		std::cout << "Boom *pause*\n \n";
		weapon_health -= ammunition.GetDamageToWeapon();
		magazine.pop();
		return std::to_string(ammunition.GetDamage()) + " damage done\n \n";
	}
	else if (weapon_health <= 0)
	{
		return "Weapon is broken \n \n";
	}
	else if (magazine.size() == 0)
	{
		return "No ammo in magazine \n \n";
	}
}
std::string Automatic::CheckAuto()
{
	return "This weapon is able to shoot automatically \n \n";
}
Automatic::Automatic() : FirearmBase()
{
}
