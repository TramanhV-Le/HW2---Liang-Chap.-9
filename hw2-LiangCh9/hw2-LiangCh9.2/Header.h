#pragma once
#include <iostream>
#include <string>
#include <cmath>

class fan {
private:
	int speed;
	bool on;
	double radius;
public:
	fan() // Default fan
	{
		int speed(1);
		bool on = false;
		double radius(5);
	}

	// Assigning the assessors to the Private class variables
	int Showspeed() { return speed; }
	bool Geton() { return on; }
	double Getradius() { return radius; }

	// Assigning the mutators to the Private class variables
	void Setspeed(int new_speed)
	{
		if (new_speed >= 1 && new_speed <= 3) // If the speed is between 1 and 3. . .
			speed = new_speed; // Turn to that new speed
	}
	void Seton(bool new_bool)
	{
		on = new_bool;
	}
	void Setradius(double new_rade)
	{
		if (new_rade > 0) // If the radius is greater than 0, assign the fan to a new radius
			radius = new_rade;
	}
};

class QuadraticEquation {
private:
	int a, b, c;
public: 
	QuadraticEquation() 
	{
		a, b, c = 1;
	}
	int GetA() { return a; } // Assigning the Assessors || Get functions
	int GetB() { return b; }
	int GetC() { return c; }

	void SetA(int x) { a = x; } // Constructor arguments
	void SetB(int x) { b = x; }
	void SetC(int x) { c = x; }

	int getDiscriminant() // Discriminant: what is under the square root sign
	{
		int x = pow(b, 2) - 4 * a * c;
		return x;
	}
	double getRoot1() // Calculates the function of the Root 1
	{
		if (getDiscriminant() < 0)
			return 0;
		else
		{
			double r1 = (-1 * b + sqrt(getDiscriminant())) / (2 * a);
			return r1;
		}
	}
	double getRoot2() // Calculates the other function of the Root 2
	{
		if (getDiscriminant() < 0) // If less than 0, display only one root.
			return 0;
		else
		{
			double r2 = (-1 * b - sqrt(getDiscriminant())) / (2 * a);
			return r2;
		}
	}
};

class EvenNumber {
private:
	int value;
public:
	EvenNumber() { value = 0; } // Assuming that User knows to input an even number
	EvenNumber(int x) { value = x; }

	int getVal() { return value; } // Value = the number that was entered.
	EvenNumber getNext() { return EvenNumber(value + 2); } // Creates the next even number in the series
	EvenNumber getPrev() { return EvenNumber(value - 2); } // Creates the previous even number in the series
};