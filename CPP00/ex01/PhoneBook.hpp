#ifndef PHONE_BOOK
#define PHONE_BOOK

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook : Contact
{
public:
	PhoneBook();
	~PhoneBook();
	void Add();
	void Search(int index) const;
	void AddList(Contact newContact);
	void DisplayInformation(int index) const;
	size_t currentIndex;
	size_t totalIndex;
private:
	Contact contacts[8];
};
#endif