#include "Fraction.h"

Fraction::Fraction():numerator(1), denominator(1){
}

Fraction::Fraction(int numerator, int denominator)
	:numerator(numerator), denominator(denominator){
	this->numerator = numerator;
	this->denominator = denominator;
}

void Fraction::setAddition(int numerator, int denominator){
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::getAddition() const {
	return numerator + denominator;
}

void Fraction::setSubtraction(int numerator, int denominator){
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::getSubtraction() const {
	return numerator - denominator;
}

void Fraction::setMultiplication(int numerator, int denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::getMultiplication() const {
	return numerator * denominator;
}

void Fraction::setDivision(int numerator, int denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::getDivision() const {
	return numerator / denominator;
}
