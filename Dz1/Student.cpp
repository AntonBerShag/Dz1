#include "Student.h"

Student::Student() {}

Student::Student(Human person, double grades,
	std::string group, std::string direction) {
	person = person;
	grades = grades;
	group = group;
	direction = direction;
}

void Student::setPerson(Human person) {
	person = person;
}

Human Student::getPerson() const{
	return person;
}


