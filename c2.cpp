#include <iostream>
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


struct wynagrodzenie {
	float styczen;
	float luty;
	float marzec;
	float kwiecien;
	float maj;
	float czerwiec;
	float lipiec;
	float sierpien;
	float wrzesien;
	float pazdziernik;
	float listopad;
	float grudzien;
	//float srednia = (styczen + luty + marzec + kwiecien + maj + czerwiec + lipiec + sierpien + wrzesien + pazdziernik + listopad + grudzien) / 12;
};


struct dane_os {
	string imie;
	string nazwisko;
	string PESEL;
};


struct pracownicy {
	dane_os dane;
	wynagrodzenie wyplata;

};


pracownicy prac[20]{};
int suma = 0;

void wpisz() {
	cout << "Wpisz dane pracownika oraz wysokosc jego wynagrodzenia w kazdym miesiacu." << endl;
	pracownicy pracownik;
	string x;
	int i = 0;
	
	do {
			cout << "Imie: ";
			cin >> prac[i].dane.imie;
			cout << "Nazwisko: ";
			cin >> prac[i].dane.nazwisko;
			cout << "PESEL: ";
			cin >> prac[i].dane.PESEL;
			cout << "Wynagrodzenie w styczniu: ";
			cin >> prac[i].wyplata.styczen;
			cout << "Wynagrodzenie w lutym: ";
			cin >> prac[i].wyplata.luty;
			cout << "Wynagrodzenie w marcu: ";
			cin >> prac[i].wyplata.marzec;
			cout << "Wynagrodzenie w kwietniu: ";
			cin >> prac[i].wyplata.kwiecien;
			cout << "Wynagrodzenie w maju: ";
			cin >> prac[i].wyplata.maj;
			cout << "Wynagrodzenie w czerwcu: ";
			cin >> prac[i].wyplata.czerwiec;
			cout << "Wynagrodzenie w lipcu: ";
			cin >> prac[i].wyplata.lipiec;
			cout << "Wynagrodzenie w sierpniu: ";
			cin >> prac[i].wyplata.sierpien;
			cout << "Wynagrodzenie w wrzesniu: ";
			cin >> prac[i].wyplata.wrzesien;
			cout << "Wynagrodzenie w pazdzierniku: ";
			cin >> prac[i].wyplata.pazdziernik;
			cout << "Wynagrodzenie w listopadzie: ";
			cin >> prac[i].wyplata.listopad;
			cout << "Wynagrodzenie w grudniu: ";
			cin >> prac[i].wyplata.grudzien;
			suma = suma + 1;
		cout << "Czy chcesz zakonczyc dodawanie pracownikow? (t - tak, n - nie)" << endl;
		cin >> x;
		
		i++;
	} while (x == "n" && i < 20);

}

float wyplaty[20]{};

void drukuj() {
	cout << "Dane pracownikow: " << endl;

	for (int i = 0; i < suma; i++)
	{
		cout << "Imie i Nazwisko: " << prac[i].dane.imie << " " << prac[i].dane.nazwisko << endl;
		cout << "PESEL: " << prac[i].dane.PESEL << endl;
		float srednia = (prac[i].wyplata.styczen + prac[i].wyplata.luty + prac[i].wyplata.marzec + prac[i].wyplata.kwiecien + prac[i].wyplata.maj + prac[i].wyplata.czerwiec + prac[i].wyplata.lipiec + prac[i].wyplata.sierpien + prac[i].wyplata.wrzesien + prac[i].wyplata.pazdziernik + prac[i].wyplata.listopad + prac[i].wyplata.grudzien)/ 12;
		wyplaty[i] = srednia;
		cout << "Srednie wynagrodzenie: " << srednia << endl << endl << endl;
	}

	
}

void max() {
	float max;
	max = wyplaty[0];
	for (int i = 1; i < 19; i++) 
		if (max > wyplaty[i])
			max = wyplaty[i];

	cout << "Najwiecej zarabia: " << max << endl;
}

void najstarszy()
{

}

int main()
{
	char znak;
	pracownicy firma[20]{};

	for (int i = 0; i < 20; i++)
	{
		firma[i].dane.imie = prac[i].dane.imie;
		firma[i].dane.nazwisko = prac[i].dane.nazwisko;
		firma[i].dane.PESEL = prac[i].dane.PESEL;
	}


	do {
		int wybor;
		cout << "Ktora funkcje uruchomic?: " << endl;
		cout << "1. Wpisz pracownika" << endl;
		cout << "2. Wyswietl dane o pracownikach" << endl;
		cout << "3. Sprawdz, kto najwiecej zarabia" << endl;
		
		cout << "Podaj numer zadania: ";
		cin >> wybor;
		cout << endl;
		switch (wybor)
		{
		case 1: wpisz();
			break;

		case 2: drukuj();
			break;

		case 3: max();
			break;

		}
		cout << endl;
		cout << "Czy chcesz powrocic do menu (t/n)? :  ";
		cin >> znak;
		system("cls");
	} while (znak != 'n');
	return 0;
}

