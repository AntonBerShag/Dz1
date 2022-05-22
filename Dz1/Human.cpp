#include "Human.h"

Human::Human():name("Sam"), surname("Carlos"), age(26), weight(75) {}

Human::Human(std::string name, std::string surname, int age, int weight)
	: name(name), surname(surname), age(age), weight(weight) {

}

void Human::setName(std::string name) {
	name = name;
}
std::string Human::getName() const {
	return name;
}

void Human::setSurname(std::string surname) {
	surname = surname;
}
std::string Human::getSurname() const {
	return surname;
}

void Human::setAge(int age) {
	age = age;
}
int Human::getAge() const {
	return age;
}

void Human::setWeight(int weight) {
	weight = weight;
}
int Human::getWeight() const {
	return weight;
}