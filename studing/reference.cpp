#include <iostream>

using namespace std;
void	changing_value(int& num)
{
	num++;
}

void	changing_value2(int* num)
{
	num++;
}

int putval(void)
{
	int	a;

	a = 1;
	return (a);
}

int main (void)
{
	int	a = 10;
	int b = 1;
	const int& c =  putval();
	int& aa = a;
	int *p = &b;
	char str[] = "hello";

	a = b;
	changing_value(a);
	changing_value2(p);
	cout << a << endl;
	cout << c  << endl;

	// cout << *p << endl;
	// cout << str << endl;
	
	return (0);
}
