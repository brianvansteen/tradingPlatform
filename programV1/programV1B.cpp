#include <iostream>

void printHello()
{
	std::cout << "Hello from other file!" << std::endl <<std::endl;
	char c = 0;
	std::cout << "char: " << sizeof(char) << std::endl << std::endl;
	signed int i = 0;
	std::cout << "signed int: " << sizeof(int) << std::endl << std::endl;
	float f = 0.0f;
	std::cout << "float: " << sizeof(float) << std::endl << std::endl;
	long double ld = 0.0;
	std::cout << "long double: " << sizeof(ld) << std::endl << std::endl;

}