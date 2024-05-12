#ifndef STAR_HPP
# define STAR_HPP

# include <iostream>
# include <string.h>

class Marine
{
	int		hp;
	int		x;
	int		y;
	int 	damage;
	bool	isdead;
	char*	name;

	public:
	Marine(void);
	Marine(int _x, int _y, const char *marine_name);
	~Marine(void);

	int	attack(void);
	void	be_attacked(int _damage);
	void	move(int _x, int _y);
	void	status(void);
};

#endif