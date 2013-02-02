/*
* this file uses a function defined in mul.c
*/

#include <iostream>

//Prottype of function mul
double mul(double x, double y)


int main()
{
	double a = 0.354;
	double b = 2.957;

	cout << "a =" << a << "\n";
	cout << "b =" << b << "\n";
	cout << "a times b =" << mul(a,b) << "\n";

	return 0;
}//main
