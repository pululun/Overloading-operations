#include <iostream>

using namespace std;

#ifndef _FRACTION_H_
#define _FRACTION_H_
class Fraction{
	private:
		int numerator;
		int denominator;
	public:
		Fraction(void);
		Fraction(int, int);
		void setNumerator(int );
		int getNumerator();
		void setDenominator(int );
		int getDenominator();
		Fraction operator+ (Fraction );
		Fraction operator- (Fraction );
		Fraction operator* (Fraction );
		Fraction operator/ (Fraction );
		~Fraction(void);
};
#endif