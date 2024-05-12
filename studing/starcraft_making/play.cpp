#include "star.hpp"

int main(void)
{
	Marine *marine[100];

	marine[0] = new Marine(2, 3, "marine 1");
	marine[1] = new Marine(3, 5, "marine 2");

	marine[0]->status();
	marine[1]->status();

	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
	marine[1]->be_attacked(marine[0]->attack());

	marine[0]->status();
	marine[1]->status();
	delete marine[0];
	delete marine[1];
}