#include "class.hpp"

using namespace std;
int	main(void)
{
	Metro metro[20];
	int line[20];
	char color[20][10];
	int	i;
	int	j;

	i = 0;
	for (;;)
	{
		cout << "Insert line number and color (if finish just put number\"0\")" << endl;
		cin >> line[i];
		if (!line[i])
			break;
		cin >> color[i];
		i++;
	}
	j = -1;
	for (int j = 0; j < i; j++)
		metro[j].put_line_color(line[j], color[j]);
	for (int j = 0; j < i; j++)
		cout << "metro " << metro[j].line << " is color : " << metro[j].color << endl;
}