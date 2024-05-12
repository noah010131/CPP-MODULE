#include <iostream>

int main (void)
{
	int	size;
	char	**p;

	std::cout << "Insert a number of students" << std::endl;
	std::cin >> size;
	p = new char*[size * 15];
	for (int i = 0; i < size; i++)
	{
		p[i] = new char[15];
		std::cout << "Insert a name of students :" << i + 1 << std::endl;
		std::cin >> p[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << "student " << i + 1 << " : " << p[i] << std::endl;
		delete[] p[i];
	}
	// std::cout << *p << std::endl;
	delete[] p;
	return (0);
}