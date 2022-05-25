#pragma once
#include "Human.h"
#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:

	Student();

	Student(Human person, double grades,
		std::string group, std::string direction);

	void setPerson(Human person);
	Human getPerson() const;

private:
	Human person;
	double grades;
	std::string group;
	std::string direction;
};

#endif