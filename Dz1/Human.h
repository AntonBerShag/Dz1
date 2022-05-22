#pragma once
#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <ctime>

class Human {
public:

	Human();

	Human(std::string name, std::string surname, int age, int weight);

	//setters and getters
	void setName(std::string name);
	std::string getName() const;

	void setSurname(std::string surname);
	std::string getSurname() const;

	void setAge(int age);
	int getAge() const;

	void setWeight(int weight);
	int getWeight() const;

private:
	std::string name;
	std::string surname;
	int age;
	int weight;
};
#endif