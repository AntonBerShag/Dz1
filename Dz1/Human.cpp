#include "Human.h"

using namespace std;

Human::Human():name("Sam"), surname("Carlos"), age(26), weight(75) {}

Human::Human(std::string name, std::string surname, int age, int weight)
	: name(name), surname(surname), age(age), weight(weight) {

}

void Human::setName(std::string name) {
	if (name == "") {
		throw std::invalid_argument("name cannot be empty");
	}
	this->name = name;
}
std::string Human::getName() const noexcept{
	return name;
}

void Human::setSurname(std::string surname) {
	if (surname == "") {
		throw std::invalid_argument("surname cannot be empty");
	}
	this->surname = surname;
}
std::string Human::getSurname() const noexcept{
	return surname;
}

void Human::setAge(int age) {
	if (age <= 0) {
		throw std::invalid_argument("age cannot be less than one");
	}
	this->age = age;
}
int Human::getAge() const noexcept{
	return age;
}

void Human::setWeight(int weight) {
	if (weight <= 0) {
		throw std::invalid_argument("weight cannot be less than one");
	}
	this->weight = weight;
}
int Human::getWeight() const noexcept{
	return weight;
}