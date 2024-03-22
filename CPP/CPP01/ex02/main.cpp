#include <iostream>
#include <string>

int main() 
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "String degiskeninin bellek adresi: " << &str << std::endl;
    std::cout << "stringPTR tarafindan tutulan bellek adresi: " << stringPTR << std::endl;
    std::cout << "stringREF tarafindan tutulan bellek adresi: " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "String degiskeninin degeri: " << str << std::endl;
    std::cout << "stringPTR tarafindan isaret edilen deger: " << *stringPTR << std::endl;
    std::cout << "stringREF tarafindan isaret edilen deger: " << stringREF << std::endl;

    return 0;
}
