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

Human Student::getPerson() const{
	return person;
}

void Student::setAvergeGrade(double averageGrade) {
	this->averageGrade = averageGrade;
}

double Student::getAvergeGrade() const {
	return averageGrade;
}

void Student::setGroup(std::string group) {
	this->group = group;
}

std::string Student::getGroup() const {
	return group;
}

void Student::setDirection(std::string direction) {
	this->direction = direction;
}

std::string Student::getDirection() const{
	return direction;
}
