#pragma once
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
	int numerator; //���������
	int denominator;

public:
	Fraction();
	Fraction(int numerator, int denominator);

	void setAddition(int numerator, int denominator); //��������
	int getAddition() const;

	void setSubtraction(int numerator, int denominator);//���������
	int getSubtraction() const;

	void setMultiplication(int numerator, int denominator);//���������
	int getMultiplication() const;

	void setDivision(int numerator, int denominator);//�������
	int getDivision() const;
};

#endif