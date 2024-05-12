#include "date.hpp"

void	get_date(int &year, int& month, int& day)
{
	std::cout << "DATE CALCULATOR PROGRAM\n\n" << std::endl;
	std::cout << "Insert current date" << std::endl;
	std::cout << "Year : ";
	std::cin >> year;
	if (year == 0)
	{
		std::cout << "Please put a number" << std::endl;
		exit(1);
	}
	std::cout << "Month : ";
	std::cin >> month;
	if (month == 0)
	{
		std::cout << "Please put a number" << std::endl;
		exit(1);
	}
	std::cout << "Day : ";
	std::cin >> day;
	if (day == 0)
	{
		std::cout << "Please put a number" << std::endl;
		exit(1);
	}
}

void calculator(Date *date, int num, int size)
{
	switch (num)
	{
	case 1:
		std::cout << "\nPut the year : ";
		std::cin >> size;
		date->AddYear(size);
		break;
	
	case 2:
		std::cout << "\nPut the month : ";
		std::cin >> size;
		date->AddMonth(size);
		break;

	case 3:
		std::cout << "\nPut the day : ";
		std::cin >> size;
		date->AddDay(size);
		break;
	
	default:
		std::cout << "You have to insert between 1 and 3" << std::endl;
		exit(1);
	}
}

int main(void)
{
	int	year;
	int	month;
	int	day;
	int num;
	int size;
	Date date;

	get_date(year, month, day);
	date.SetDate(year, month, day);
	std::cout << "\nWhat kind of date do you want to add? put the number : " << std::endl;
	std::cout << "year : 1\nmonth : 2\nday : 3" << std::endl;
	std::cout << "Insert : ";
	std::cin >> num;
	calculator(&date, num, size);
	date.ShowDate();
	return (0);
}