#include "star.hpp"

int main(void)
{
	Photon_cannon pc1(0, 1, "pc1");
	Photon_cannon pc2(pc1, "pc2");

	pc1.status();
	pc2.status();

	return (0);
}