#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::Add()
{
	std::string input;
	Contact newContact;
	
	do 
	{
		std::cout << "Enter Name" << std::endl;
		std::getline(std::cin, input);
	} while (!SetFirstName(input));
	newContact.SetFirstName(input);
	do
	{
		std::cout << "Enter LastName" << std::endl;
		std::getline(std::cin, input);
	} while (!SetLastName(input));
	newContact.SetLastName(input);

	do
	{
		std::cout << "Enter NickName" << std::endl;
		std::getline(std::cin, input);
	} while (!SetNickName(input));
	newContact.SetNickName(input);

	do
	{
		std::cout << "Enter DarkSecret" << std::endl;
		std::getline(std::cin, input);
	} while (!SetDarkSecret(input));
	newContact.SetDarkSecret(input);

	do
	{
		std::cout << "Enter PhoneNumber" << std::endl;
		std::getline(std::cin, input);
	} while (!SetPhoneNumber(input));
	newContact.SetPhoneNumber(input);
	AddList(newContact);
}

void PhoneBook::AddList(Contact newContact)
{
	if (currentIndex < 8)
	{
		contacts[currentIndex] = newContact;
		currentIndex++;
		totalIndex++;
		if (totalIndex == 8)
			totalIndex = 7;
	}
	else
	{
		currentIndex = 0;
		contacts[currentIndex] = newContact;
	}
}

void PhoneBook::Search(int index) const
{
	size_t _index = index - 1;
	if (_index > totalIndex)
		std::cout << "Invalid index" << std::endl;
	else
		DisplayInformation(_index);
}

void PhoneBook:: DisplayInformation(int index) const
{
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << contacts[index].GetFirstName();
	std::cout << "|" << std::setw(10)  << contacts[index].GetLastName();
	std::cout << "|" << std::setw(10)  << contacts[index].GetNickName();
	std::cout << "|" << std::setw(10)  << contacts[index].GetDarkSecret();
	std::cout << "|" << std::setw(10) << contacts[index].GetPhoneNumber() << std::endl;
}


