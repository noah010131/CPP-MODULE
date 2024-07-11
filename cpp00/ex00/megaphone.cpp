#include <iostream>

int	main(int ac, char **av)
{
	int i;
	int	j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i] && av[i][++j])
		{
			if(av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
		}
		std::cout << av[i];
	}
	std::cout << "\n";
	return (0);
}