#include "FuzzyNumber.h"

void _unexpected_to_bad()
{
	cerr << "bad_exception" << endl;
	throw;
}

void Call_Bad() throw(int)
{
	throw 'x';
}

int main()
{
	set_unexpected(_unexpected_to_bad);

	try
	{
		FuzzyNumber A;
		cin >> A;
		cout << A;

		cout << "Size of class: " << sizeof(A) << endl;

		FuzzyNumber B(5, 1, 7);
		cout << B << endl;


		FuzzyNumber C = A + B;
		cout << "C = " << C << endl;

		FuzzyNumber D = A * B;
		cout << "D = " << D << endl;
		try
		{
			A--;
		}
		catch (InheritedException a) //за замовчуванням
		{
			cerr << a.What() << endl << endl;
		}
		catch (InheritedException* a) //вказівник
		{
			cerr << a->What() << endl << endl;
		}
	}
	catch (logic_error a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	FuzzyNumber N;
	cin >> N;
	cout << N;

	try
	{
		N++;
	}
	catch (Exception& a) //посилання
	{
		cerr << "Exception: " << a.What() << endl;
	}
	catch (logic_error a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	try
	{
		Call_Bad();
	}
	catch (bad_exception) //стандарт
	{
		cerr << "catch (bad_exception)" << endl;
	}
}