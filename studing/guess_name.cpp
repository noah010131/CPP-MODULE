#include <iostream>

using namespace std;
int	main(void)
{
	char name[20];
	const char *real_name;
	int	i;

	real_name = "Chanyoung";
	cout << "Guess my name" << endl;
	for(;;)
	{
		cout << "insert :" << endl;
		cin >> name;
		i = -1;
		while (name[++i] != '\0' && real_name[i] != '\0')
		{
			if (name[i] != real_name[i])
				break;
		}
		if (!name[i] && !real_name[i])
		{
			cout << "You did well" << endl;
			break;
		}
		else
			cout << "Isn't my name!" << endl;

	}
	return (0);
}