#include<iostream>
using namespace std;

class Fraction //Class created 
{
public: //Functions declared 
	int Numerator, Denominator;
	void Quotient(Fraction, Fraction);
	void Product(Fraction, Fraction);
	void Sum(Fraction, Fraction);
	void Difference(Fraction, Fraction);

	
	void fraction();
	void print(Fraction r);
};

void Fraction::fraction()  //Input values 
{
	cout << "Please enter a numerator: ";
	cin >> Numerator;
	cout << "\n" << endl;
	cout << "Please enter a denomonator: ";
	cin >> Denominator;
	cout << "\n" << endl;
}



void Fraction::Product(Fraction r, Fraction p) //Multiply fractions
{
	Numerator = (r.Numerator*p.Numerator);
	Denominator = (r.Denominator*p.Denominator);
}

void Fraction::Quotient(Fraction r, Fraction p) //Divide fractions
{
	Numerator = (r.Numerator*p.Denominator);
	Denominator = (p.Numerator*r.Denominator);
}
void Fraction::Sum(Fraction r, Fraction p) //Add fractions
{
	Numerator = ((r.Numerator*p.Denominator) + (r.Denominator*p.Numerator));
	Denominator = (r.Denominator*p.Denominator);
}

void Fraction::Difference(Fraction r, Fraction p) //Subtract fractions
{
	Numerator = ((r.Numerator*p.Denominator) - (r.Denominator*p.Numerator));
	Denominator = (r.Denominator*p.Denominator);
}

void print(Fraction r) //Prints output in mixed number form
{
	int Num1, Num2;
	int Num3, Num4;

	Num1 = r.Numerator;
	Num2 = r.Denominator;

	if (Num1 > Num2)
	{

		Num3 = Num1 / Num2;
		Num4 = Num3*Num2;
		Num1 = Num1 - Num4;

		cout << Num3 << " " << Num1 << "/" << Num2 << "\n" << endl;
	}
	else cout << Num1 << "/" << Num2 << "\n" << endl;
}

int main()
{
	Fraction fractionObject1; //Objects created
	Fraction fractionObject2;

	Fraction QuotientObject;
	Fraction ProductObject;
	Fraction SumObject;
	Fraction printObject;
	Fraction DifferenceObject;

	

	//Calling functions
	cout << "1st Fraction:\n" << endl;
	fractionObject1.fraction();
	cout << "2nd Fraction:\n" << endl;
	fractionObject2.fraction();

	QuotientObject.Quotient(fractionObject1, fractionObject2);
	ProductObject.Product(fractionObject1, fractionObject2);
	SumObject.Sum(fractionObject1, fractionObject2);
	DifferenceObject.Difference(fractionObject1, fractionObject2);
	
	

	cout << "-------------------\n" << endl;

	cout << "The Quotient of the two fractions are:" << endl;
	print(QuotientObject);
	cout << "The Product of the two fractions are:" << endl;
	print(ProductObject);
	cout << "The Sum of the two fractions are:" << endl;
	print(SumObject);
	cout << "The Difference of the two fractions are:" << endl;
	print(DifferenceObject);

	

	return 0;
}