#include <iostream>

int main (void)
{
	int	a = 10;
	int b = 1;
	int& aa = a;

	a = b;
	std::cout << aa << std::endl;
	
	return (0);
}
