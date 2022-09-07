#include "Student.h"


Student::Student():averageGrade(3.0), group("CS-12"), direction("Computer science") {}

Student::Student(Human person, double averageGrade,
	std::string group, std::string direction):averageGrade(averageGrade),
	group(group), direction(direction) {
	this->person = person;
	this->averageGrade = averageGrade;
	this->group = group;
	this->direction = direction;
}

void Student::setPerson(Human person) {
	this->person = person;
}

Human Student::getPerson() const noexcept {
	return person;
}

void Student::setAvergeGrade(double averageGrade) {
	if (averageGrade == 0)
		throw std::invalid_argument("Invalid average grade");
	this->averageGrade = averageGrade;
}

double Student::getAvergeGrade() const noexcept {
	return averageGrade;
}

void Student::setGroup(std::string group) {
	if (group == "")
		throw std::invalid_argument("Invalid group");
	this->group = group;
}

std::string Student::getGroup() const noexcept {
	return group;
}

void Student::setDirection(std::string direction) {
	if (direction == "")
		throw std::invalid_argument("Invalid direction");
	this->direction = direction;
}

std::string Student::getDirection() const noexcept {
	return direction;
}
