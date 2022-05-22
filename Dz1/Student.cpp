#include "Student.h"

Student::Student() {}

/*Human::Human(std::string name, std::string surname, int age, int weight)
	: name(name), surname(surname), age(age), weight(weight) {

}*/

void Student::setName(std::string name) {
	person.setName(name);
}
std::string Student::getName() const {
	return person.getName();
}

void Student::setSurname(std::string surname) {
	person.setSurname(surname);
}
std::string Student::getSurname() const {
	return person.getSurname();
}

void Student::setAge(int age) {
	person.setAge(age);
}
int Student::getAge() const {
	return person.getAge();
}

void Student::setWeight(int weight) {
	person.setWeight(weight);
}
int Student::getWeight() const {
	return person.getWeight();
}

void Student::setGrades(double grades) {
	grades = grades;
}
double Student::getGrades() const {
	return grades;
}

void Student::setGroup(std::string group) {
	group = group;
}
std::string Student::getGroup() const {
	return group;
}

void Student::setDirection(std::string direction) {
	direction = direction;
}
std::string Student::getDirection() const {
	return direction;
}