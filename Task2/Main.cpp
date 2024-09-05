#include<iostream>

using namespace std;

class Fraction
{
	int numerator;
	int denominator;

public:
	Fraction()
	{
		numerator = denominator = 0;
	}

	Fraction(int value)
	{
		numerator = denominator = value;
	}

	Fraction(int numer, int denom)
	{
		numerator = numer;
		denominator = denom;
	}

	void Init()
	{
		cout << "Input Numerator: ";
		cin >> numerator;
		cout << "Input Denominator: ";
		cin >> denominator;
	}

	void Print()
	{
		cout << "Fraction: " << numerator << "/" << denominator << endl;
	}

	void SetNumerator(int numer)
	{
		numerator = numer;
	}

	void SetDenominator(int denom)
	{
		denominator = denom;
	}

	int GetNumerator()
	{
		return numerator;
	}

	int GetDenominator()
	{
		return denominator;
	}

	Fraction Add(Fraction& b)
	{
		return Fraction(numerator + b.numerator, denominator + b.denominator);
	}

	Fraction Substract(Fraction& b)
	{
		return Fraction(numerator - b.numerator, denominator - b.denominator);
	}

	Fraction Multiply(Fraction& b)
	{
		return Fraction(numerator * b.numerator, denominator * b.denominator);
	}

	Fraction Divide(Fraction& b)
	{
		return Fraction(numerator / b.numerator, denominator / b.denominator); //Wrong data type for division
	}

};

int main()
{
	Fraction a(8);
	a.Print();

	Fraction b(5, 2);
	b.Print();

	Fraction c;
	c.Print();

	c = a.Add(b);
	c.Print();

	c = a.Substract(b);
	c.Print();

	c = a.Multiply(b);
	c.Print();

	c = a.Divide(b);
	c.Print();
}