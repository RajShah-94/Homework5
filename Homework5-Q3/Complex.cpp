/*
 * Complex.cpp
 *
 *  Created on: 28 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include "Complex.hpp"

void Complex::Print(std::ostream & os) const {
	os << re << "+" << im << "i";
}

std::ostream & operator<<(std::ostream & os, const Complex &c)
{
	c.Print(os);
	return os;
}

double Complex::modulus() const{
	double z;
	z=sqrt(re*re+im*im);
	return z;
}

double Complex::modulusSqr() const{
	return modulus()*modulus();
}

double Complex::arg() const{
	return atan2(im,re);
}
