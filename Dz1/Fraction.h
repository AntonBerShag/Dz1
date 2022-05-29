#pragma once
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
	int numerator; //числитель
	int denominator;

public:
	Fraction();
	Fraction(int numerator, int denominator);

	void setAddition(int numerator, int denominator); //сложение
	int getAddition() const;

	void setSubtraction(int numerator, int denominator);//вычитание
	int getSubtraction() const;

	void setMultiplication(int numerator, int denominator);//умножение
	int getMultiplication() const;

	void setDivision(int numerator, int denominator);//деление
	int getDivision() const;
};

#endif