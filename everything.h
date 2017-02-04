/* Name:        everything.h
   Author:      Brendan Gowen
   Description: A header file that
   includes everything I might need
   for developing an application. */

#ifndef EVERYTHING_H
#define EVERYTHING_H

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::cin;

namespace io
{
	int intinput(string question)
	{
		int userinput;
		cout << question;
		cin >> userinput;
		cout << endl;
		return userinput;
	}

	float fltinput(string question)
	{
		float userinput;
		cout << question;
		cin >> userinput;
		cout << endl;
		return userinput;
	}

	double dblinput(string question)
	{
		double userinput;
		cout << question;
		cin >> userinput;
		cout << endl;
		return userinput;
	}

	string strinput(string question)
	{
		string userinput;
		cout << question;
		cin >> userinput;
		cout << endl;
		return userinput;
	}

	void delay(double a)
	{
		usleep(a * 1000);
	}
}

namespace math
{
	double add(double a, double b)
	{
		return a + b;
	}

	double subtract(double a, double b)
	{
		return a - b;
	}

	double multiply(double a, double b)
	{
		return a * b;
	}

	double divide(double a, double b)
	{
		return a / b;
	}

	double squareroot(double a)
	{
		return sqrt(a);
	}

	double cubicroot(double a)
	{
		return cbrt(a);
	}

	double roundup(double a)
	{
		return ceil(a);
	}

	double rounddown(double a)
	{
		return floor(a);
	}

	double power(double a, double b)
	{
		return pow(a, b);
	}

	double pi()
	{
		return atan(1)*4;
	}

	void listOperations()
	{
		cout << "Add" << endl;
		cout << "Subtract" << endl;
		cout << "Multiply" << endl;
		cout << "Divide" << endl;
		cout << "SquareRoot" << endl;
		cout << "CubicRoot" << endl;
		cout << "RoundUp" << endl;
		cout << "RoundDown" << endl;
		cout << "Power" << endl;
		cout << "Pi" << endl;
		cout << endl;
	}
}

namespace randnum
{
	void randomize()
	{
		srand((unsigned)time(NULL));
	}

	int randint(int min, int max)
	{
		return rand() % max + min;
	}
}

#endif