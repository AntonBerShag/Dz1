#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Flat.h"
#include "Fraction.h"
using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Human\n";

	Human h;

	h.setName("Anton");
	h.setSurname("Berdnikov");
	h.setAge(24);
	h.setWeight(74);

	cout << "Name: " << h.getName() << endl;
	cout << "Surname: " << h.getSurname() << endl;
	cout << "Age: " << h.getAge() << endl;
	cout << "Weight: " << h.getWeight() << "\n\n";

	cout << "Student\n";

	Student Anton;

	Anton.setPerson(h);
	Anton.setAvergeGrade(4.1);
	Anton.setGroup("CS-12");
	Anton.setDirection("Computer scinece");

	cout << "Student: Anton" << endl;
	Anton.getPerson();
	cout << "Average grade: " << Anton.getAvergeGrade() << endl;
	cout << "Group: " << Anton.getGroup() << endl;
	cout << "Direction: " << Anton.getDirection() << "\n\n";

	cout << "Flat\n";

	Flat AntonFlat;

	AntonFlat.setAdress("Kuibyshev street 34/2");
	AntonFlat.setSquare(53.2);
	string listOfTenants[5] = { "Artem Sorokov", "Marat Kostin", "Marina Sorokina",
		"Nastya Lavrova", "Ksenia Soburiva"};
	AntonFlat.setListOfTenants(listOfTenants);
	AntonFlat.setWageCoefficientLivingSpace(59.0);
	double WageCoefficientLivingSpace = AntonFlat.getWageCoefficientLivingSpace();


	cout << "Anton's Adress: " << AntonFlat.getAdress() << endl;
	cout << "Anton's square amount: " << AntonFlat.getSquare() << endl;
	cout << "List of tenants: " << AntonFlat.getListOfTenants() << endl;
	cout << "Wage Coefficient living space: ";
	if (WageCoefficientLivingSpace >= 33.0 && 
		WageCoefficientLivingSpace < 42.0)
		cout << "For 2 people\n\n";
	else
		if (WageCoefficientLivingSpace >= 42.0 && 
			WageCoefficientLivingSpace < 55.0)
			cout << "For 3 people\n\n";
		else
			cout << "For 4 and more people\n\n";

	cout << "Fraction\n";

	Fraction f;
	int n1, n2;
	cout << "Enter two numbers to addit: ";
	cin >> n1 >> n2;
	f.setAddition(n1, n2);
	cout << n1 << " + " << n2 << " = " << f.getAddition() << endl;

	cout << "Enter two numbers to subtract: ";
	cin >> n1 >> n2;
	f.setSubtraction(n1, n2);
	cout << n1 << " - " << n2 << " = " << f.getSubtraction() << endl;

	cout << "Enter two numbers to multiply: ";
	cin >> n1 >> n2;
	f.setMultiplication(n1, n2);
	cout << n1 << " * " << n2 << " = " << f.getMultiplication() << endl;

	cout << "Enter numerator and denominator: ";
	cin >> n1 >> n2;
	f.setDivision(n1, n2);
	cout << n1 << " / " << n2 << " = " << f.getDivision() << "\n\n";

	return 0;
}