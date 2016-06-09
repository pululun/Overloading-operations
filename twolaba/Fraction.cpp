#include "Fraction.h"
Fraction::Fraction(void){
	this->numerator = 1;
	this->denominator = 2;
}

Fraction::Fraction(int numerator, int denominator){
	this->numerator = numerator;
	this->denominator = denominator;
}

void Fraction::setNumerator(int numerator){
	this->numerator = numerator;
}

int Fraction::getNumerator(){
	return this->numerator;
}

void Fraction::setDenominator(int denominator){
	this->denominator = denominator;
}

int Fraction::getDenominator(){
	return this->denominator;
}

 Fraction Fraction::operator+ (Fraction ff){
 	Fraction ff_res;
 	if(this->numerator < this->denominator){
 		if(ff.numerator < ff.denominator){
 			if(this->denominator == ff.denominator){
 				ff_res.numerator = this->numerator + ff.numerator;
 				ff_res.denominator = this->denominator;
 			}else{
 				ff_res.numerator = this->numerator * ff.denominator + ff.numerator * this->denominator;
 				ff_res.denominator = this->denominator * ff.denominator;
 			}
 		}else{
 			ff_res.numerator = 0;
 			ff_res.denominator = 0;
 		}
 	}else{
 		ff_res.numerator = 0;
 		ff_res.denominator = 0;
 	}
 	return ff_res;
}

 Fraction Fraction::operator- (Fraction ff){
 	Fraction ff_res;
 	if(this->numerator < this->denominator){
 		if(ff.numerator < ff.denominator){
 			if(this->denominator == ff.denominator){
 				ff_res.numerator = this->numerator - ff.numerator;
 				ff_res.denominator = this->denominator;
 			}else{
 				ff_res.numerator = this->numerator * ff.denominator - ff.numerator * this->denominator;
 				ff_res.denominator = this->denominator * ff.denominator;
 			}
 		}else{
 			ff_res.numerator = 0;
 			ff_res.denominator = 0;
 		}
 	}else{
 		ff_res.numerator = 0;
 		ff_res.denominator = 0;
 	}
 	return ff_res;
}

 Fraction Fraction::operator* (Fraction ff){
 	Fraction ff_res;
 	if(this->numerator < this->denominator){
 		if(ff.numerator < ff.denominator){
 				ff_res.numerator = this->numerator * ff.numerator;
 				ff_res.denominator = this->denominator * ff.denominator;
 		}else{
 			ff_res.numerator = 0;
 			ff_res.denominator = 0;
 		}
 	}else{
 		ff_res.numerator = 0;
 		ff_res.denominator = 0;
 	}
 	return ff_res;
}

 Fraction Fraction::operator/ (Fraction ff){
 	Fraction ff_res;
 	if(this->numerator < this->denominator){
 		if(ff.numerator < ff.denominator){
 				ff_res.numerator = this->numerator * ff.denominator;
 				ff_res.denominator = this->denominator * ff.numerator;
 		}else{
 			ff_res.numerator = 0;
 			ff_res.denominator = 0;
 		}
 	}else{
 		ff_res.numerator = 0;
 		ff_res.denominator = 0;
 	}
 	return ff_res;
}

Fraction::~Fraction(void){

}
