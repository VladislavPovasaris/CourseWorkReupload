#include "ConsoleInteractions.h"
bool compare(Iweapon* other, Iweapon* other1)
{
	return other->GetDamage() > other1->GetDamage();
}

int Repeat(std::vector <Iweapon*>& weapons);
void Menu()
{
	std::cout << "-------------Select the required option--------------" << std::endl;
	std::cout << "(1) - create a handgun" << std::endl
		<< "(2) - create an automatic rifle" << std::endl
		<< "(3) - create a rifle" << std::endl
		<< "(4) - create a shotgun" << std::endl
		<< "(5) - show the list of weapons" << std::endl
		<< "(6) - sort the list by the damage of the weapon" << std::endl
		<< "(7) - exit" << std::endl << std::endl;
}
void Menu2()
{
	std::cout << "-------------Select the required option--------------\n";
	std::cout << "(1) - get description" << std::endl
		<< "(2) - see stats" << std::endl
		<< "(3) - reload" << std::endl
		<< "(4) - check magazine" << std::endl
		<< "(5) - check amount of ammunition" << std::endl
		<< "(6) - add some ammunition" << std::endl
		<< "(7) - shoot" << std::endl
		<< "(8) - shoot the whole magazine" << std::endl
		<< "(9) - repair the weapon" << std::endl 
		<< "(10) - delete this weapon from the list" << std::endl
		<< "(11) - exit" << std::endl << std::endl << std::endl;
}
void ConsoleInteractions()
{
	Menu();
	std::vector <Iweapon*> weapons;
	Repeat(weapons);
}
int Choice(std::vector <Iweapon*>& weapons, int &choice1)
{
	Menu2();
	int choice2;
	std::cin >> choice2;
	std::cout << std::endl;
	switch (choice2)
	{
	case(1):
	{
		std::cout << weapons[choice1 - 1]->GetDescription() << std::endl;
		Choice(weapons,choice1);
		break;
	}
	case(2):
	{
		std::cout << weapons[choice1 - 1]->GetStats() << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(3):
	{
		std::cout << weapons[choice1 - 1]->Reload() << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(4):
	{
		std::cout << weapons[choice1 - 1]->CheckMagazine() << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(5):
	{
		std::cout << weapons[choice1 - 1]->CheckAmmo() << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(6):
	{
		std::cout << "Please enter the number of ammo" << std::endl;
		int am;
		std::cin >> am;
		std::cout << weapons[choice1 - 1]->AddAmmo(am) << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(7):
	{
		std::cout << weapons[choice1 - 1]->Shoot() << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(8):
	{
		std::cout << weapons[choice1 - 1]->ShootWholeMag() << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(9):
	{
		std::cout << weapons[choice1 - 1]->Repair() << std::endl;
		Choice(weapons, choice1);
		break;
	}
	case(10):
	{
		weapons.erase(weapons.cbegin()+choice1-1);
		std::cout << "You have deleted this weapon from the list" << std::endl << std::endl;
		Menu();
		return 0;
		break;
		
	}
	case(11):
	{
		Menu();
		return 0;
		break;
	}
	default:
	{
		std::cout << "Please write the number from the list" << std::endl;
		Choice(weapons, choice1);
	}
	}
}
int Repeat(std::vector <Iweapon*>& weapons)
{
	int choice;
	std::cin >> choice;
	std::cout << std::endl;
	switch (choice)
	{
	case (1):
	{
		std::cout << "Enter the name of the weapon" << std::endl;
		std::string name;
		std::cin >> name;
		std::cout << "Specify the ammo type of the weapon" << std::endl;
		std::cout << "Enter the name of the ammo" << std::endl;
		std::string ammo_name;
		std::cin >> ammo_name;
		std::cout << "Enter the damage of the ammo" << std::endl;
		double ammo_damage;
		std::cin >> ammo_damage;
		std::cout << "Enter the damage of the ammo to the gun" << std::endl;
		double ammo_damage_to_the_gun;
		std::cin >> ammo_damage_to_the_gun;
		Ammo temp(ammo_name, ammo_damage, ammo_damage_to_the_gun);
		std::cout << "Enter the capacity of the magazine" << std::endl;
		int capac;
		std::cin >> capac;
		std::cout << "Enter the ammount of ammo" << std::endl;
		int amount;
		std::cin >> amount;
		Handgun temp1(name, temp, capac, amount);
		weapons.push_back(&temp1);
		std::cout << "You have successfully created the handgun" << std::endl << std::endl << std::endl << std::endl;
		Menu();
		Repeat(weapons);
		break;
	}
	case (2):
	{
		std::cout << "Enter the name of the weapon" << std::endl;
		std::string name;
		std::cin >> name;
		std::cout << "Specify the ammo type of the weapon" << std::endl;
		std::cout << "Enter the name of the ammo" << std::endl;
		std::string ammo_name;
		std::cin >> ammo_name;
		std::cout << "Enter the damage of the ammo" << std::endl;
		double ammo_damage;
		std::cin >> ammo_damage;
		std::cout << "Enter the damage of the ammo to the gun" << std::endl;
		double ammo_damage_to_the_gun;
		std::cin >> ammo_damage_to_the_gun;
		Ammo temp(ammo_name, ammo_damage, ammo_damage_to_the_gun);
		std::cout << "Enter the capacity of the magazine" << std::endl;
		int capac;
		std::cin >> capac;
		std::cout << "Enter the ammount of ammo" << std::endl;
		int amount;
		std::cin >> amount;
		AutomaticRifle temp1(name, temp, capac, amount);
		weapons.push_back(&temp1);
		std::cout << "You have successfully created the automatic rifle" << std::endl << std::endl << std::endl << std::endl;
		Menu();
		Repeat(weapons);
		break;
	}
	case (3):
	{
		std::cout << "Enter the name of the weapon" << std::endl;
		std::string name;
		std::cin >> name;
		std::cout << "Specify the ammo type of the weapon" << std::endl;
		std::cout << "Enter the name of the ammo" << std::endl;
		std::string ammo_name;
		std::cin >> ammo_name;
		std::cout << "Enter the damage of the ammo" << std::endl;
		double ammo_damage;
		std::cin >> ammo_damage;
		std::cout << "Enter the damage of the ammo to the gun" << std::endl;
		double ammo_damage_to_the_gun;
		std::cin >> ammo_damage_to_the_gun;
		Ammo temp(ammo_name, ammo_damage, ammo_damage_to_the_gun);
		std::cout << "Enter the capacity of the magazine" << std::endl;
		int capac;
		std::cin >> capac;
		std::cout << "Enter the ammount of ammo" << std::endl;
		int amount;
		std::cin >> amount;
		Rifle temp1(name, temp, capac, amount);
		weapons.push_back(&temp1);
		std::cout << "You have successfully created the rifle" << std::endl << std::endl << std::endl << std::endl;
		Menu();
		Repeat(weapons);
		break;
	}
	case (4):
	{
		std::cout << "Enter the name of the weapon" << std::endl;
		std::string name;
		std::cin >> name;
		std::cout << "Specify the ammo type of the weapon" << std::endl;
		std::cout << "Enter the name of the ammo" << std::endl;
		std::string ammo_name;
		std::cin >> ammo_name;
		std::cout << "Enter the damage of the ammo" << std::endl;
		double ammo_damage;
		std::cin >> ammo_damage;
		std::cout << "Enter the damage of the ammo to the gun" << std::endl;
		double ammo_damage_to_the_gun;
		std::cin >> ammo_damage_to_the_gun;
		Ammo temp(ammo_name, ammo_damage, ammo_damage_to_the_gun);
		std::cout << "Enter the capacity of the magazine" << std::endl;
		int capac;
		std::cin >> capac;
		std::cout << "Enter the ammount of ammo" << std::endl;
		int amount;
		std::cin >> amount;
		Shotgun temp1(name, temp, capac, amount);
		weapons.push_back(&temp1);
		std::cout << "You have successfully created the shotgun" << std::endl << std::endl << std::endl << std::endl;
		Menu();
		Repeat(weapons);
		break;
	}
	case (5):
	{
		std::cout << "List of the guns:" << std::endl;
		if (weapons.size())
		{
			for (int i = 0; i < weapons.size(); i++)
			{
				std::cout << "(" << i + 1 << ") - " << weapons[i]->GetStats() << std::endl;
			}
			std::cout << "If you want to interact with a weapon, select it's number from the list \nOr enter 0 to exit \n";
			int choice1;
			std::cin >> choice1;
			std::cout << std::endl;
			if (choice1 == 0)
			{
				Menu();
				Repeat(weapons);
				break;
			}
			Choice(weapons, choice1);
		}
		else
		{
			std::cout << "There are no weapons on the list, please create any \n \n";
			Menu();
		}
		Repeat(weapons);
		break;
	}
	case (6):
	{
		if (weapons.size())
		{
			std::cout << "You have successfully sorted the list of guns" << std::endl << std::endl << std::endl << std::endl;
			std::sort(weapons.begin(), weapons.end(), compare);
		}
		else
		{
			std::cout << "There are no weapons on the list, please create any" << std::endl << std::endl << std::endl << std::endl;
		}
		Menu();
		Repeat(weapons);
		break;
	}
	case (7):
	{
		std::cout << "You have exited the menu" << std::endl << std::endl;
		return 0;
	}
	default:
	{
		std::cout << "Please select the option from the list" << std::endl;
		Repeat(weapons);
	}
	}
	return 0;
}


