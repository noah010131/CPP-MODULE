#include <iostream>

using namespace std;

class Test
{
	char c;

	public:
	Test(char name)
	{
		c = name;
		cout << name << " is making" << endl;
	}
	~Test()
	{
		cout << c << " is being destructed" << endl;
	}
};

void f(char name)
{
	Test b(name);
}

int main(void)
{
	Test a('a');
	f('b');
	
	return (0);
}