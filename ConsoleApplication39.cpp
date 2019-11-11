// ConsoleApplication39.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n=1000000;
	double s = 0;
	double a;
	double pi = 2.0*asin(1.0);//значение для сравнения
	cout << "For n=1000000" << endl;
	for (int i = 0; i < n; i++)
	{
		a = (pow(-1, i)) / (2 * i + 1);
		s = s + a;
	}
	cout <<"PI="<< 4*s<<endl;
	cout <<"pi-PI=" << pi - 4*s << endl;
	system("pause");
	return 0;
}
