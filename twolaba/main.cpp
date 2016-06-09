#include <iostream>
#include "Fraction.h"
using namespace std;

int main (int argc, char *argv[])
{	
	double Numerator = 0.0;
	double Denominator = 0.0;
	double result = 0.0;
	Fraction ff(1, 2);
	Fraction ff2(1, 3);
	Fraction ff3;
	ff3 = ff + ff2;
	if(ff3.getNumerator() == 0 && ff3.getDenominator() == 0){
	cout << "****Improper fraction****" << endl;
	}else{
	Numerator = ff3.getNumerator();
	Denominator = ff3.getDenominator();
	result = Numerator / Denominator;
	cout << "The result of addition of fractions:" << endl << "[" << ff3.getNumerator() << "]" << endl  << "[" << ff3.getDenominator()  << "]" << "    or    " << result << endl;
	}

	cout << endl;
	ff3 = ff - ff2;
	if(ff3.getNumerator() == 0 && ff3.getDenominator() == 0){
	cout << "****Improper fraction****" << endl;
	}else{
	Numerator = ff3.getNumerator();
	Denominator = ff3.getDenominator();
	result = Numerator / Denominator;
	cout << "The result of subtracting of fractions:" << endl << "[" << ff3.getNumerator() << "]" << endl  << "[" << ff3.getDenominator()  << "]" << "    or    " << result << endl;
	}

	cout << endl;
	ff3 = ff * ff2;
	if(ff3.getNumerator() == 0 && ff3.getDenominator() == 0){
	cout << "****Improper fraction****" << endl;
	}else{
	Numerator = ff3.getNumerator();
	Denominator = ff3.getDenominator();
	result = Numerator / Denominator;
	cout << "The result of multiplying of fractions:" << endl << "[" << ff3.getNumerator() << "]" << endl  << "[" << ff3.getDenominator()  << "]" << "    or    " << result << endl;
	}

	cout << endl;
	ff3 = ff / ff2;
	if(ff3.getNumerator() == 0 && ff3.getDenominator() == 0){
	cout << "****Improper fraction****" << endl;
	}else{
	Numerator = ff3.getNumerator();
	Denominator = ff3.getDenominator();
	result = Numerator / Denominator;
	cout << "The result of dividing of fractions:" << endl << "[" << ff3.getNumerator() << "]" << endl  << "[" << ff3.getDenominator()  << "]" << "    or    " << result << endl;
	}
	return 0;
}