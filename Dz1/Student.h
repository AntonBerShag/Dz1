#pragma once
#include "Human.h"
#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:

	Student();

	Student(Human person, double grades,
		std::string group, std::string direction);
	
	void setName(std::string name);
	std::string getName() const;

	void setSurname(std::string surname);
	std::string getSurname() const;

	void setAge(int age);
	int getAge() const;

	void setWeight(int weight);
	int getWeight() const;

	void setGrades(double grades);
	double getGrades() const;

	void setGroup(std::string group);
	std::string getGroup() const;

	void setDirection(std::string direction);
	std::string getDirection() const;

private:
	Human person;
	double grades;
	std::string group;
	std::string direction;
};

#endif