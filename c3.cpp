#include <iostream>
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

void sortowanie()
{
	int a, b, c;
	cout << "Podaj trzy liczby, a komputer posortuje je za Ciebie!" << endl;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;


	if (a > b && a > c && b > c)
		{
			int *pierwsza = &a;
			int *druga = &b;
			int *trzecia = &c;

			cout << "Liczby w kolejnosci malejacej: " << *pierwsza << ", " << *druga << ", " << *trzecia << endl;
			cout << "Liczby w kolejnosci rosnacej: " << *trzecia << ", " << *druga << ", " << *pierwsza << endl;
	};

	if (a > c && a > b && c > b)
	{
		int *pierwsza = &a;
		int *druga = &c;
		int *trzecia = &b;

		cout << "Liczby w kolejnosci malejacej: " << *pierwsza << ", " << *druga << ", " << *trzecia << endl;
		cout << "Liczby w kolejnosci rosnacej: " << *trzecia << ", " << *druga << ", " << *pierwsza << endl;
	};

	if (c>a&& c > b && b < c && b > a)
	{
		int *pierwsza = &c;
		int *druga = &b;
		int *trzecia = &a;

		cout << "Liczby w kolejnosci malejacej: " << *pierwsza << ", " << *druga << ", " << *trzecia << endl;
		cout << "Liczby w kolejnosci rosnacej: " << *trzecia << ", " << *druga << ", " << *pierwsza << endl;
	};
	if (c > a && c > b && a > b)
	{
		int *pierwsza = &c;
		int *druga = &a;
		int *trzecia = &b;

		cout << "Liczby w kolejnosci malejacej: " << *pierwsza << ", " << *druga << ", " << *trzecia << endl;
		cout << "Liczby w kolejnosci rosnacej: " << *trzecia << ", " << *druga << ", " << *pierwsza << endl;
	};
	if (b > a && b > c && c > a)
	{
		int *pierwsza = &b;
		int *druga = &c;
		int *trzecia = &a;

		cout << "Liczby w kolejnosci malejacej: " << *pierwsza << ", " << *druga << ", " << *trzecia << endl;
		cout << "Liczby w kolejnosci rosnacej: " << *trzecia << ", " << *druga << ", " << *pierwsza << endl;
	};
	if (b > a && b > c && a > c )
	{
		int *pierwsza = &b;
		int *druga = &a;
		int *trzecia = &c;

		cout << "Liczby w kolejnosci malejacej: " << *pierwsza << ", " << *druga << ", " << *trzecia << endl;
		cout << "Liczby w kolejnosci rosnacej: " << *trzecia << ", " << *druga << ", " << *pierwsza << endl;
	};
	
	
}

void alfabet() {
	char alfa[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','q','p','r','s','t','u','w','x','y','z' };
	char *wsk = &alfa[1];
	cout << "Druga litera alfabetu to: " << *wsk << "." << endl;
	int i = 0;
	for (i = 0; i < 26; i = i + 4)
	{
		cout << "Nastepnie co czwarta litera to: " << wsk[i] << endl;
	}
	

}

void zerowanie() {
	int liczba = 5;
	int *wsk = &liczba;

	*wsk = 0;

	cout << *wsk << endl;
	cout << liczba<< endl;

	int tab[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *wsk1 = tab;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 != 0)
		{
			wsk1[i] = 0;
			cout <<i <<" Element tablicy to: "<< wsk1[i] << endl;
		}
	}

}

void wiek() {
	int wiek = 80;
	int *wskaznik = &wiek;
	int wiek1;
	cout << "Jaki jest twoj wiek?: ";
	cin >> wiek1;
	cout << "Podany wczesniej wiek to: " << wiek << endl;
	*wskaznik = wiek1;
	cout << "Twoj wiek to: " << *wskaznik << endl;
}

int main()
{
	char znak;

	do {
		int wybor;
		cout << "Ktora funkcje uruchomic?: " << endl;
		cout << "1. Sortowanie" << endl;
		cout << "2. Alfabet" << endl;
		cout << "3. Zerowanie" << endl;
		cout << "4. Wiek" << endl;

		cout << "Podaj numer zadania: ";
		cin >> wybor;
		cout << endl;
		switch (wybor)
		{
		case 1: sortowanie();
			break;

		case 2: alfabet();
			break;

		case 3: zerowanie();
			break;

		case 4: wiek();
			break;

		}
		cout << endl;
		cout << "Czy chcesz powrocic do menu (t/n)? :  ";
		cin >> znak;
		system("cls");
	} while (znak != 'n');
	return 0;

}

