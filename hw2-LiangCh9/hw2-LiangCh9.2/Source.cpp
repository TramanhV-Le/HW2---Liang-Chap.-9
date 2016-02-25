// TRAMANH "VINA" LE
// CS172-1 M. BELL
// HW #2 - Liang Chapter 9: 9.2 , 9.6 , 9.11

#include <iostream>
#include <string>
#include <ctime>
#include "Header.h"
using namespace std;

int main()
{
	// 9.2
	fan f1, f2; // Implements two fans

	f1.Setspeed(3);
	f1.Seton(1); // integer 1 represents "true" in bool, meaning "on" for the fan
	f1.Setradius(10);

	f2.Setspeed(2);
	f2.Seton(0); // int 0 represents "false" in bool, means "off"
	f2.Setradius(5);

	// 9.6
	QuadraticEquation QE1;
	int a, b, c;
	cout << "Enter numbers for a, b, and , c: ";
	cin >> a, b, c;
	QE1.SetA(a);
	QE1.SetB(b);
	QE1.SetC(c);
	cout << "Discriminant is " << QE1.getDiscriminant() << endl;
	cout << "Roots: ";
	if (QE1.getDiscriminant() >= 0)
	{
		if (QE1.getDiscriminant() == 0)
			cout << QE1.getRoot1() << endl;
		else
			cout << QE1.getRoot1() << QE1.getRoot2() << endl;
	}
	else
		cout << "The equation has no real roots. \n";

	// 9.11
}