#include "star.hpp"

Marine::Marine(void)
{
	hp = 50;
	x = 0;
	y = 0;
	damage = 5;
	isdead = false;
}

Marine::Marine(int _x, int _y, const char *marine_name)
{
	name = new char[strlen(marine_name) + 1];
	strcpy(name, marine_name);
	hp = 50;
	x = _x;
	y = _y;
	damage = 5;
	isdead = false;
}

void	Marine::move(int _x, int _y)
{
	x = _x;
	y = _y;
}

int	Marine::attack(void)
{
	return (damage);
}

void Marine::be_attacked(int _damage)
{
	hp -= _damage;
	if (hp <= 0)
		isdead = true;
}

void	Marine::status(void)
{
	std::cout << " *** Marine *** " << std::endl;
	std::cout << " Location : ( " << x << " , " << y << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}

Marine::~Marine()
{
	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
	if (name != NULL)
		delete[] name;
}
