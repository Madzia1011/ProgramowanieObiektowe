// C1Z1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void zad1() {
	
	float napiecie;
	int wybor;

	cout << "Wybierz jednostke: " <<  endl;
	cout << "1. kV " << endl;
	cout << "2. V " << endl;
	cout << "Wybieram: " ;
	cin >> wybor;

	switch (wybor)
	{
		case 1: 
			cout << "Podaj wartosc napiecia w kV: ";
			cin >> napiecie;
			cout << endl;
			if (napiecie <= 1)
				cout << "Napiecie jest niskie." << endl;
			else if (napiecie > 1 && napiecie < 60)
				cout << "Napiecie jest srednie." << endl;
			else cout << "Napiecie jest wysokie." << endl;
		break;

		case 2:
			cout << "Podaj wartosc napiecia w V: ";
			cin >> napiecie;
			cout << endl;
			if (napiecie <= 1000)
				cout << "Napiecie jest niskie." << endl;
			else if (napiecie > 1000 && napiecie < 60000)
				cout << "Napiecie jest srednie." << endl;
			else cout << "Napiecie jest wysokie." << endl;
			break;

	}

	cout << endl;
}

void zad2() {
	srand(time(NULL));
	cout << "Losujemy liczbe z przedzialu od 0 - 100 " << endl;
	cout << "Wylosowana liczba musi byc z przedzialu od 20 - 30" << endl;
	int liczba;

	losowanie:
	
	liczba = rand() % 100;
	if (liczba >= 20 && liczba <= 30)
		cout << "Wylosowana liczba to: " << liczba << endl;
	else
		goto losowanie;
	
}

void zad3() {
	int rok;
	cout << "Podaj rok: " << endl;
	cin >> rok;
	
	if (rok >= 0 && rok <= 100)
		cout << "Rok " << rok << " to I wiek";
	else if (rok > 100 && rok <=200)
		cout << "Rok " << rok <<  " to II wiek";
	else if (rok > 200 && rok <= 300)
		cout << "Rok " << rok << " to III wiek";
	else if (rok > 300 && rok <= 400)
		cout << "Rok " << rok << " to IV wiek";
	else if (rok > 400 && rok <= 500)
		cout << "Rok " << rok << " to V wiek";
	else if (rok > 500 && rok <= 600)
		cout << "Rok " << rok << " to VI wiek";
	else if (rok > 600 && rok <= 700)
		cout << "Rok " << rok << " to VII wiek";
	else if (rok > 700 && rok <= 800)
		cout << "Rok " << rok << " to VIII wiek";
	else if (rok > 800 && rok <= 900)
		cout << "Rok " << rok << " to IX wiek";
	else if (rok > 900 && rok <= 1000)
		cout << "Rok " << rok << " to X wiek";
	else if (rok > 1000 && rok <= 1100)
		cout << "Rok " << rok << " to XI wiek";
	else if (rok > 1100 && rok <= 1200)
		cout << "Rok " << rok << " to XII wiek";
	else if (rok > 1200 && rok <= 1300)
		cout << "Rok " << rok << " to XIII wiek";
	else if (rok > 1300 && rok <= 1400)
		cout << "Rok " << rok << " to XIV wiek";
	else if (rok > 1400 && rok <= 1500)
		cout << "Rok " << rok << " to XV wiek";
	else if (rok > 1500 && rok <= 1600)
		cout << "Rok " << rok << " to XVI wiek";
	else if (rok > 1600 && rok <= 1700)
		cout << "Rok " << rok << " to XVII wiek";
	else if (rok > 1700 && rok <= 1800)
		cout << "Rok " << rok << " to XVIII wiek";
	else if (rok > 1800 && rok <= 1900)
		cout << "Rok " << rok << " to XIX wiek";
	else if (rok > 1900 && rok <= 2000)
		cout << "Rok " << rok << " to XX wiek";
	else if (rok > 2000 && rok <= 2100)
		cout << "Rok " << rok << " to XXI wiek";

}

void zad4() {

	int rok, lata;
	cout << "Podaj swoj rok urodzenia, a ja powiem Ci ile minelo lat" << endl;
	cout << "Rok: "; cin >> rok;
	lata = 2018 - rok;

	if (lata == 1)
		cout << "Od twoich narodzin minal " << lata << " rok." << endl;
	else if ((lata > 1 && lata < 5) || (lata > 21 && lata < 25) || (lata > 31 && lata < 35) || (lata > 41 && lata < 45) || (lata > 51 && lata < 55) || (lata > 61 && lata < 65) || (lata > 71 && lata < 75) || (lata > 81 && lata < 85) || (lata > 91 && lata < 95))
		cout << "Od twoich narodzin minely " << lata << " lata." << endl;
	else
		cout << "Od twoich narodzin minelo " << lata << " lat." << endl;
}
	
void zad5() {

	int rok, lata;
	cout << "Podaj rok: "; 
	cin >> rok;

	if (rok == 2018)
		cout << "Od tego roku dzieli nas 0 lat.";
	else if (rok < 2018)
	{
		lata = 2018 - rok;

		if (lata == 1)
			cout << "Od tego roku dzieli nas " << lata << " rok." << endl;
		else if ((lata > 1 && lata < 5) || (lata > 21 && lata < 25) || (lata > 31 && lata < 35) || (lata > 41 && lata < 45) || (lata > 51 && lata < 55) || (lata > 61 && lata < 65) || (lata > 71 && lata < 75) || (lata > 81 && lata < 85) || (lata > 91 && lata < 95))
			cout << "Od tego roku dziela nas " << lata << " lata." << endl;
		else
			cout << "Od tego roku dzieli nas " << lata << " lat." << endl;

	}

	else
	{
		lata = rok - 2018;

		if (lata == 1)
			cout << "Od tego roku dzieli nas " << lata << " rok." << endl;
		else if ((lata > 1 && lata < 5) || (lata > 21 && lata < 25) || (lata > 31 && lata < 35) || (lata > 41 && lata < 45) || (lata > 51 && lata < 55) || (lata > 61 && lata < 65) || (lata > 71 && lata < 75) || (lata > 81 && lata < 85) || (lata > 91 && lata < 95))
			cout << "Od tego roku dziela nas " << lata << " lata." << endl;
		else
			cout << "Od tego roku dzieli nas " << lata << " lat." << endl;
	}
}

void zad6() {

	cout << "Policz ile godzin w tygodniu jestes w szkole" << endl;
	int szkola[7] = {};
	cout << "Podaj liczbe godzin przesiedzianych w szkole: " << endl;
	cout << "Poniedzialek: ";
	cin >> szkola[0];
	cout << "Wtorek: ";
	cin >> szkola[1];
	cout << "Sroda: ";
	cin >> szkola[2];
	cout << "Czwartek: ";
	cin >> szkola[3];
	cout << "Piatek: ";
	cin >> szkola[4];
	cout << "Sobota: ";
	cin >> szkola[5];
	cout << "Niedziela: ";
	cin >> szkola[6];
	//int suma = szkola[0] + szkola[1] + szkola[2] + szkola[3] + szkola[4] + szkola[5] + szkola[6];

	int suma = 0;

		for (int i = 0; i < 7; i++)
		{
			
			suma += szkola[i];
		}

	cout << "W ciagu calego tygodnia spedzasz w szkole: " << suma << " godzin." << endl;

}

void zad7() {

	cout << "Obliczenie wartosci funkcji liniowej" << endl;
	int a, x, b;
	cout << "Podaj wspolczynnik a: ";
	cin >> a;
	cout << "Podaj wpolczynnik b: ";
	cin >> b;
	cout << "Podaj wspolczynnik x: ";
	cin >> x;
	cout << "Wartosc funkcji liniowej y = ax + b wynosi: y = " << (a*x) + b << endl;

}


void zad8() {
	
	cout << "Wyswietl tablice kodow ASCII w szachownicy: " << endl;
	cout << "Podaj rozmiar tablicy" << endl;
	cout << "Podaj x: ";
	int x;
	cin >> x;
	

	int wymiar = x; 
	int ** szachownica = new int *[wymiar];

	for (int i = 0; i<wymiar; i++)
		szachownica[i] = new int[wymiar];


	for (int i = 0; i < wymiar; i++) {
		for (int j = 0; j < wymiar; j++) {
			if ((i + j) % 2) cout << "O";
			else cout << "X";
		}
		cout << endl;
	}
}

void zad9() {

	int tab[255]{};


	cout << "Podawaj kolejno litery " << endl;

	int i = 0;


	do {
		podawanie:
		cout << "Podaj litere: ";
		cin >> tab[i];


		if (tab[i] = '.')
		{
			cout << "Koniec podawania liter";
			goto liczenie_spacji;
		}
		else
		{

			i++;
			goto podawanie;
		}
			

	} while (tab[i] != '.');

liczenie_spacji:
	cout << "spacje";




}

void zad10() {

	
		for (int a = 0; a < 256; ++a) 
			printf("%d\t%c\n", a, a);

	
}


int main()
	{

	char znak;

	do {
		int wybor;
		cout << "Ktora funkcje uruchomic?: " << endl;
		cout << "1. Sprawdz czy napiecie jest niskie czy wysokie." << endl;
		cout << "2. Losuj liczbe z przedzialu 20-30." << endl;
		cout << "3. Podaj rok i sprawdz, ktory to wiek." << endl;
		cout << "4. Podaj rok urodzenia i sprawdz ile minelo lat." << endl;
		cout << "5. Podaj rok i sprawdz ile lat nas od/do niego dzieli." << endl;
		cout << "6. Podaj ile godzin danego dnia siedzisz w szkole i sprawdz jakie jest twoje obciazenie." << endl;
		cout << "7. Policz wartosc funkcji liniowej y = ax + b." << endl;
		cout << "8. Wyswietl tablice szachowa zbudowana z kodow ASCII." << endl;
		cout << "9. Wprowadzaj znaki a nastepnie sprawdz ile wprowadziles spacji." << endl;
		cout << "10. Wyswietl 255 kolejnych znakow ASCII." << endl;
		cout << "Podaj numer zadania: ";
		cin >> wybor;
		cout << endl;
		switch (wybor)
		{
		case 1: zad1();
			break;

		case 2: zad2();
			break;

		case 3: zad3();
			break;

		case 4: zad4();
			break;

		case 5: zad5();
			break;

		case 6: zad6();
			break;

		case 7: zad7();
			break;

		case 8: zad8();
			break;

		case 9: zad9();
			break;

		case 10: zad10();
			break;
		}
		cout << endl;
		cout << "Czy chcesz powrocic do menu (t/n)? :  ";
		cin >> znak;
		system("cls");
	}
	while (znak != 'n');
	return 0;

	}

