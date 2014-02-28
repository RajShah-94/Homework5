/*
 * Complex.hpp
 *
 *  Created on: 28 Feb 2014
 *      Author: rajru_000
 */

#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <cmath>
#include <iostream>

class Complex {

public:
	Complex(double re=0, double im=0): re(re), im(im) {;}
	Complex(const Complex & r) {
		*this = r; // use assignment operator
	}
	~Complex() {;}

	Complex & operator=(const Complex & r) {
		re = r.re;
		im = r.im;
		return *this;
	}

	Complex & operator+=(const Complex & r) {
		re += r.re;
		im += r.im;
		return * this;
	}

	Complex & operator/=(const Complex & r) {
		double denom = r.modulusSqr();
				if(denom==0) { // this is technically an error! division by 0
					return *this; // return this unchanged
				}
				double real = (re*r.re+im*r.im)/denom;
				double imag = (im*r.re-re*r.im)/denom;
				re = real;
				im = imag;
				return *this;
	}


	double modulus() const;
	double modulusSqr() const;
	double arg() const;
	void Print(std::ostream & os) const;

private:
	double re; // real part
	double im;  // imaginary part
};

std::ostream & operator<<(std::ostream & os, const Complex & r);

#endif /* COMPLEX_HPP_ */
