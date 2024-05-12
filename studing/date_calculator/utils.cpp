#include "date.hpp"

void	Date::SetDate(int _year, int _month, int _date)
{
	year = _year;
	month = _month;
	day = _date;
}

int	Date::day_in_month(int year, int month)
{
	int	day_limit;

	if ((month <= 7 && month % 2) || (month > 7 && month % 2 == 0))
	day_limit = 31;
	else if (month != 2)
		day_limit = 30;
	else
	{
		if ((year % 400 == 0) || (year % 4 == 0 && (year % 100)))
			day_limit = 29;
		else
			day_limit = 28;
	}
	return (day_limit);
}

void	Date::AddDay(int inc)
{
int	day_limit;

	if (inc < 0)
	{
		cout << "Please check the value what you input";
		return ;
	}
	day_in_month(year, month);
	day += inc;
	while (day > day_in_month(year, month))
	{
		day -= day_in_month(year, month);
       	AddMonth(1);
	}
}

void	Date::AddMonth(int inc)
{
	month += inc;
	while (month > 12)
	{
		year++;
		month -= 12;
	}
}

void	Date::AddYear(int inc)
{
	year += inc;
}

void	Date::ShowDate()
{
	cout << "Date after operation : " << year << "/" << month << "/" << day << "." << endl;
}
