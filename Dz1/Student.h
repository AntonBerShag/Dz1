#pragma once
#include "Human.h"
#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:

	Student();

	Student(Human person, double averageGrade,
		std::string group, std::string direction);

	void setPerson(Human person);
	Human getPerson() const;

	void setAvergeGrade(double averageGrade);
	double getAvergeGrade() const;

	void setGroup(std::string group);
	std::string getGroup() const;

	void setDirection(std::string direction);
	std::string getDirection() const;

private:
	Human person;
	double averageGrade;
	std::string group;
	std::string direction;
};

#endif