#ifndef CLASS_H
# define CLASS_H

# include <iostream>

class Metro
{
	public:
	int	line;
	char color[10];
	void	put_line_color(int _line, char _color[])
	{
		int	i;

		i = -1;
		line = _line;
		while (_color[++i])
			color[i] = _color[i];
		color[i] = '\0';
	}
};

#endif

