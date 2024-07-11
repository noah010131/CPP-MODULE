#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <cstdlib>
# include <unistd.h>
# include "Contact.hpp"

class PhoneBook
{
	public:
		void	AddContact(void);
		void	PrintContact(void);
		void	Exit(void);

	private:
		Contact contact[8];
		int		index;
};

#endif