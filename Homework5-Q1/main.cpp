/*
 * main.cpp
 *
 *  Created on: 28 Feb 2014
 *      Author: rajru_000
 */

#include <iostream>

class MyClass {
	public:
	MyClass(); // added constructor
	MyClass(double _a, double _b) :a(_a), b(_b) {;}
	~MyClass() {delete &a;} // added the &

MyClass & operator=(const MyClass & X) {
	a = X.a;
	return *this;
}

MyClass & operator+=(const MyClass & X) {
	a += X.a;

	return *this; // cant change X its a const
}

MyClass operator+(const MyClass & X) {//  &X was not initialized
	MyClass Y(*this);
	return Y+=X;
}

double getvalue(){return a; }
double getvalue2() {return b;}

private:
	double a;
	double b;// needed to add this line (1)

};

int main() {
	MyClass a(123, 134);
	std::cout<<  a.getvalue();

	;}


