#include <iostream>

using namespace std;
void print (int a)
{
	cout << "a" << endl;
}

void print (double a)
{
	cout << "b" << endl;
}

void print (char a)
{
	cout << "c" << endl;
}
int	main(void)
{
	char a = '1';
	print(a);
	return (0);
}