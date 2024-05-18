#include "star.hpp"

Photon_cannon::Photon_cannon(int _x, int _y, const char* pc_name)
{
	std::cout << "생성자 호출 !" << std::endl;
	name = new char[strlen(pc_name) + 1];
	strcpy(name, pc_name);
	hp = 50;
	x = _x;
	y = _y;
	damage = 5;
	isdead = false;
	std::cout << name << " 이(가) 생성되었습니다 !" << std::endl;
}

Photon_cannon::Photon_cannon(const Photon_cannon& pc, const char* pc_name)
{
	std::cout << "복사 생성자 호출 !" << std::endl;
	name = new char[strlen(pc_name) + 1];
	strcpy(name, pc_name);
	hp = pc.hp;
	x = pc.x;
	y = pc.y;
	std::cout << pc_name << "이(가) " << pc.name << "을(를) 복사했습니다 !" << std::endl;
}

void	Photon_cannon::status(void)
{
	std::cout << " *** Photon cannon : " << name << " *** " << std::endl;
	std::cout << " Location : ( " << x << " , " << y << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}

Photon_cannon::~Photon_cannon()
{
	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
	if (name != NULL)
		delete[] name;
}