// 10 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
int const c = 500;
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int chislo, ss, i = 0, desyat=0;
	int ost[c];
	cout << "Число, необходмое для перевода: ";
	cin >> chislo;
	cout<< "Интекс системы счисления: " ;
	cin >>  ss;
	
	if (ss != 10 && ss != 2) 
	{
		cout << "Этот конвертатор не имеет такой системы счисления! " << "\n";
	}
	else
	{
		if (ss == 10)

		{
			
			while (chislo >= 2)
			{
				ost[i] = chislo % 2;
				chislo = chislo / 2;
				i++;
				
			}
			cout << "Двоичная запись числа: ";
			cout << chislo;


			while (i-1!=-1)
			{
				cout << ost[i-1];
				i--;
				
			}
			cout << "\n";
		}
		else

		{

			int k = chislo;
			while (k != 0)
			{
				if (k % 10 != 0 && k % 10 != 1)
				{
					cout << "Ваша запись не является двоичной!" << "\n";
					break;

				}
				else
					k = k / 10;
			}
			if (k == 0)
			{
				while (chislo != 0)
				{
					desyat = desyat + (chislo % 10 * pow(2, i));
					chislo = chislo / 10;
					i++;
				}
				cout << "Число в десятичной записи: " << desyat << "\n";
			}
		}


	}
	system("pause");
    return 0;
}

