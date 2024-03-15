
#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	PhoneBook phoneBook;
	std::string Input;
	do
	{
		if (Input == "ADD")
			phoneBook.Add();
		else if (Input == "SEARCH")
		{
			std::string index;
			int convertIndex;
			while (true)
			{
				std::cout << "Enter index" << std::endl;
				std::getline(std::cin, index);
				try
				{
					convertIndex = std::stoi(index);
					break;
				}
				catch (const std::exception& errorMesage)
				{
					std::cout << "Invalid index " << std::endl;
				}
			}
			
			phoneBook.Search(convertIndex);
		}
		else if (Input == "EXIT")
			return 0;
		std::cout << "Please enter the operation you want to perform." << std::endl;
		std::getline(std::cin, Input);
	}while (Input == "ADD" || Input == "SEARCH" || Input == "EXIT");
}
