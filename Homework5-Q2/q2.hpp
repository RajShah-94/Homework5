/*
 * q2.hpp
 *
 *  Created on: 28 Feb 2014
 *      Author: rajru_000
 */

#ifndef Q2_HPP_
#define Q2_HPP_

MyClass operator+(const MyClass & a) const { // declares operator that can between object my class (sum operator)
	MyClass b(*this); // creates a duplicate instance of the current myClass object
	b += a; // adds value of a to running value of b
	return b; // returns myClass object
}

#endif /* Q2_HPP_ */
