#ifndef DATE_HPP
# define DATE_HPP

# include <iostream>

using namespace std;

class Date 
{
	int	month;  // 1 부터 12 까지.
	int	day;    // 1 부터 31 까지.

	public:
	int	year;
  	void	SetDate(int _year, int _month, int _date);
	int		day_in_month(int year, int month);
	void	AddDay(int inc);
	void	AddMonth(int inc);
	void	AddYear(int inc);
	void	ShowDate(void);

	Date() = default;
};

# endif