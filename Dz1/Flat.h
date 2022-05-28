#pragma once
#include "Student.h"
#ifndef FLAT_H
#define FLAT_H

class Flat {
private:
	std::string adress;
	double square;
	std::string listOfTenants[5];
	double wageCoefficientLivingSpace;

public:

	Flat();

	Flat(Human person, std::string adress, double square,
		std::string listOfTenants[5], double wageCoefficientLivingSpace);

	void setAdress(std::string adress);
	std::string getAdress() const;
	
	void setSquare(double square);
	double getSquare() const;

	void setListOfTenants(std::string listOfTenants[5]);
	std::string getListOfTenants() const;

	void setWageCoefficientLivingSpace(double wageCoefficientLivingSpace);
	double getWageCoefficientLivingSpace() const;

};

#endif