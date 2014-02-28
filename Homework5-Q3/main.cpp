/*
 * main.cpp
 *
 *  Created on: 28 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include "Complex.hpp"

int main() {
	Complex z1(3,4);
	Complex z2(1,-2);
	std::cout << z1+z2 << std::endl;
	std::cout << z1-z2 << std::endl;
	std::cout << z1*z2 << std::endl;
	std::cout << z1/z2 << std::endl;
	std::cout << z1*z2 << std::endl;
}
