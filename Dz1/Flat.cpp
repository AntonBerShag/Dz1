#include <iostream>
#include "Flat.h"

Flat::Flat():adress("Kuibyshev street"), square(0.0),
	listOfTenants(), wageCoefficientLivingSpace(0.0) {}

Flat::Flat(Human person, std::string adress, double square,
	std::string listOfTenants[5], double wageCoefficientLivingSpace)
	: adress(adress), square(square),
	listOfTenants(), wageCoefficientLivingSpace(wageCoefficientLivingSpace) {
	this->adress = adress;
	this->square = square;
	for (int i = 0; i < 5; i++)
		this->listOfTenants[i] = listOfTenants[i];
	this->wageCoefficientLivingSpace = wageCoefficientLivingSpace;
}

void Flat::setAdress(std::string adress){
	if (adress == "")
		throw std::invalid_argument("Invalid adress");
	this->adress = adress;
}

std::string Flat::getAdress() const noexcept {
	return adress;
}

void Flat::setSquare(double square){
	if (square == 0)
		throw std::invalid_argument("Invalid square");
	this->square = square;
}

double Flat::getSquare() const noexcept {
	return square;
}

void Flat::setListOfTenants(std::string listOfTenants[5]) {
	if (listOfTenants == 0)
		throw std::invalid_argument("Invalid argument");
	for (int i = 0; i < 5; i++)
		this->listOfTenants[i] = listOfTenants[i];
	
}

std::string Flat::getListOfTenants() const noexcept {
	std::string lot;
	for (int i = 0; i < 5; i++) {
		lot += listOfTenants[i] + ", ";
		if (i == 3) {
			lot += listOfTenants[i + 1] + ". ";
			break;
		}
	}
	return lot;
}

void Flat::setWageCoefficientLivingSpace(double wageCoefficientLivingSpace) {
	if (wageCoefficientLivingSpace == 0)
		throw std::invalid_argument("Invalid argument");
	this->wageCoefficientLivingSpace = wageCoefficientLivingSpace;
}

double Flat::getWageCoefficientLivingSpace() const noexcept {
	return wageCoefficientLivingSpace;
}

