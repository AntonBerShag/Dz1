#pragma once
#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <ctime>
#include <exception>
#include <stdexcept>

class Human {
public:

	Human();

	Human(std::string name, std::string surname, int age, int weight);

	//setters and getters
	void setName(std::string name);
	std::string getName() const noexcept;

	void setSurname(std::string surname);
	std::string getSurname() const noexcept;

	void setAge(int age);
	int getAge() const noexcept;

	void setWeight(int weight);
	int getWeight() const noexcept;

private:
	std::string name;
	std::string surname;
	int age;
	int weight;
};
#endif