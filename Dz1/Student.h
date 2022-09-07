#pragma once
#include "Human.h"
#include <stdexcept>
#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:

	Student();

	Student(Human person, double averageGrade,
		std::string group, std::string direction);

	void setPerson(Human person);
	Human getPerson() const noexcept;

	void setAvergeGrade(double averageGrade);
	double getAvergeGrade() const noexcept;

	void setGroup(std::string group);
	std::string getGroup() const noexcept;

	void setDirection(std::string direction);
	std::string getDirection() const noexcept;

private:
	Human person;
	double averageGrade;
	std::string group;
	std::string direction;
};

#endif