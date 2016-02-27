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
	cout << "Enter numbers for a, b, and , c: "; // Proctors user for the numbers
	cin >> a, b, c;																				/*  ---Joseph---  This doesn't work. It breaks the program (-1) */
	QE1.SetA(a); // Calls the assigned variables in the Private class
	QE1.SetB(b);
	QE1.SetC(c);
	cout << "Discriminant is " << QE1.getDiscriminant() << endl; // Calling the discriminant function inputted numbers
	cout << "Roots: ";
	if (QE1.getDiscriminant() >= 0) // Checking the roots with the discriminant
	{
		if (QE1.getDiscriminant() == 0) // If the discriminant is 0, only display 1 root
			cout << QE1.getRoot1() << endl;
		else
			cout << QE1.getRoot1() << QE1.getRoot2() << endl; // If not, display second root
	}
	else
		cout << "The equation has no real roots. \n"; // Displays the non-existant root

	// 9.11
	EvenNumber EN1(16); // Implements the "test program" to 16
	cout << EN1.getVal() << endl;
	EvenNumber EN2 = EN1.getNext(); // Implements for inserted integer to either add (which this one does) or subtract
	cout << EN2.getVal() << endl;
	EvenNumber EN3 = EN1.getPrev(); // Implements for inseted integer to subtract to get the previous even number
	cout << EN3.getVal() << endl;
	return 0;

}