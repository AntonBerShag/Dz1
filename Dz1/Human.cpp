#include "Human.h"
#include <stdexcept>

Human::Human():name("Sam"), surname("Carlos"), age(26), weight(75) {}

Human::Human(std::string name, std::string surname, int age, int weight)
	: name(name), surname(surname), age(age), weight(weight) {

}

void Human::setName(std::string name) {
	if (name == "")
		throw std::invalid_argument("Invalid name");
	this->name = name;
}
std::string Human::getName() const {
	return name;
}

void Human::setSurname(std::string surname) {
	if(surname == "")
		throw std::invalid_argument("Invalid surname");
	this->surname = surname;
}
std::string Human::getSurname() const {
	return surname;
}

void Human::setAge(int age) {
	if(age == 0)
		throw std::invalid_argument("Invalid Age");
	this->age = age;
}
int Human::getAge() const {
	return age;
}

void Human::setWeight(int weight) {
	if (weight == 0)
		throw std::invalid_argument("Invalid Weight");
	this->weight = weight;
}
int Human::getWeight() const {
	return weight;
}