// Lab_04_6.cpp
// Обухов Віктор
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 7

#include <iostream>
#include <cmath>

using namespace std;


 int main() {
	double P, S;
	int k, i;
	P = 1;
	k = 1;
	while (k <= 20)
	{
		S = 0;
		i = 1;
		while (i <= k)
		{
			S += (1 * i) * (1 * i);
			i++;
		}
		P *= (S) / (1 + S);
		k++;
	}
	cout << P << endl;
	P = 1;
	k = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{

			S += (1. * i) * (1. * i);
			i++;
		} while (i <= k);
		P *= (S) / (1 + S);
		k++;
	} while (k <= 20);
	cout << P << endl;
	P = 1;
	for (k = 1; k <= 20; k++)
	{
		S = 0;
		for (i = 1; i <= k; i++)
		{
			S += (1. * i) * (1. * i);
		}
		P *= (S) / (1 + S);
	}
	cout << P << endl;
	P = 1;
	for (k = 20; k >= 1; k--
		)

	{
		S = 0;
		for (i = k; i >= 1; i--)

		{
			S += (1. * i) * (1. * i);
		}
		P *= (S) / (1 + S);
	}
	cout << P << endl;
	return 0;
}
