// Tworzenie Programu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ofstream Zapisz;
ifstream Otworz;
void menuFunkcji(string nazwa, string rodzajReturna, string nazwaZwracanejZmiennej);
void menuGlowne();

void biblioteka(){

	string nazwa;
	cout << "Podaj nazwe biblioteki: ";
	cin >> nazwa;

	Zapisz.open("program.cpp", ios::app);

	Zapisz << "#include<" << nazwa << ">" << endl<< endl;

	cout << "Biblioteka zostala dodana!" << endl;

	Zapisz.close();
}

void wstawMain() {

	Zapisz.open("program.cpp", ios::app);

	Zapisz << "int main(int argc, char *argv[])" << endl << "{" << endl << endl;

	cout << "Funkcja main zostala dodana!" << endl;

	Zapisz.close();
}

void wstawCialo(string nazwa, string rodzajReturna, string nazwaZwracanejZmiennej) {
	string funkcja;
	cout << "Napisz funkcje: ";
	cin >> funkcja;
	cin.clear();
	cin.sync();


	Zapisz << funkcja << endl;
	menuFunkcji(nazwa, rodzajReturna, nazwaZwracanejZmiennej);
}

void wstawReturn(string nazwa, string rodzajReturna, string nazwaZwracanejZmiennej) {

	Zapisz << "return " << nazwaZwracanejZmiennej << ";"<< endl;
	menuFunkcji(nazwa, rodzajReturna, nazwaZwracanejZmiennej);
}

void dodajZmienna(string nazwa, string rodzajReturna, string nazwaZwracanejZmiennej) {
	menuFunkcji(nazwa, rodzajReturna, nazwaZwracanejZmiennej);
}

void dodajZwracana(string nazwa, string rodzajReturna, string nazwaZwracanejZmiennej) {
	Zapisz << rodzajReturna << " " << nazwaZwracanejZmiennej << ";"<< endl;
	menuFunkcji(nazwa, rodzajReturna, nazwaZwracanejZmiennej);
}

void wstawKlamre() {
	Zapisz << "}" << endl; menuGlowne();
}

void menuFunkcji(string nazwa, string rodzajReturna, string nazwaZwracanejZmiennej) {
	cout << "0. Dodaj zmienna zwracana z funkcji: " << endl;
	cout << "1. Dodaj zmienna do funkcji: " << endl;
	cout << "2. Wstaw return." << endl;
	cout << "3. Wstaw cialo funkcji." << endl;
	cout << "4. Wstaw klamre koncowa." << endl;
	cout << "5. Menu glowne." << endl;
	int opcja;
	cin >> opcja;
	cin.clear();
	cin.sync();
	switch (opcja) {
	case 0: dodajZwracana(nazwa, rodzajReturna, nazwaZwracanejZmiennej); break;
	case 1: dodajZmienna(nazwa, rodzajReturna, nazwaZwracanejZmiennej); break;
	case 2: wstawReturn(nazwa, rodzajReturna, nazwaZwracanejZmiennej); break;
	case 3: wstawCialo(nazwa, rodzajReturna, nazwaZwracanejZmiennej); break;
	case 4: wstawKlamre(); break;
	case 5: menuGlowne(); break;
	}
}

void wstawFunkcje() {
	
	string rodzajReturna, nazwaZwracanejZmiennej;
	
	Zapisz.open("program.cpp", ios::app);

	string nazwa;
	cout << "Podaj nazwe funkcji: ";
	cin >> nazwa;
	cin.clear();
	cin.sync();

	cout << "Podaj typ zwracany: ";
	cin >> rodzajReturna;
	cin.clear();
	cin.sync();

	cout << "Podaj nazwe zwracanej zmiennej: ";
	cin >> nazwaZwracanejZmiennej;
	cin.clear();
	cin.sync();
	Zapisz << rodzajReturna <<" " << nazwa << "(){" << endl;
	menuFunkcji(nazwa, rodzajReturna, nazwaZwracanejZmiennej);
	cout << "Funkcja dodana do programu" << endl;

	Zapisz.close();


}

void wstawTablice(){
	Zapisz.open("program.cpp", ios::app);

	string nazwa;
	int rozmiar;

	cout << "Podaj nazwe tablicy: ";
	cin >> nazwa;
	cout << "Podaj rozmiar tablicy: ";
	cin >> rozmiar;

	Zapisz << nazwa << "[" << rozmiar << "]" << endl << endl;

	cout << "Tablica zostala dodana!" << endl;

	Zapisz.close();
}

void wstawGetchar() {
	Zapisz.open("program.cpp", ios::app);
	Zapisz << "getchar();" << endl << "};";

	cout << "getchar() zostal dodany!" << endl;

	Zapisz.close();
}

void wstawSTD() {
	Zapisz.open("program.cpp", ios::app);
	Zapisz << "using namespace std;"<< endl << endl;

	cout << "Przestrzen nazw zostala dodana!" << endl;

	Zapisz.close();
}

void menuGlowne() {
	char znak;
	do {
		int wybor;
		cout << "Ktora funkcje uruchomic?: " << endl;
		cout << "1. Wstaw biblioteke." << endl;
		cout << "2. Wstaw przestrzen nazw std." << endl;
		cout << "3. Wstaw funkcje main" << endl;
		cout << "4. Wstaw dowolna funkcje." << endl;
		cout << "5. Wstaw dowolna tablice." << endl;
		cout << "6. Wstaw getchar." << endl;
		cout << "7. Wyswietl program." << endl;
		cout << "8. Wyczysc program." << endl;
		cout << "Podaj numer zadania: ";
		cin >> wybor;
		cout << endl;
		switch (wybor)
		{
		case 1: biblioteka();
			break;

		case 2: wstawSTD();
			break;

		case 3: wstawMain();
			break;

		case 4: wstawFunkcje();
			break;

		case 5: wstawTablice();
			break;

		case 6: wstawGetchar();
			break;

		case 7: system("notepad.exe program.cpp");
			break;

		case 8:
		{
			Zapisz.open("program.cpp", ios::trunc);
			Zapisz.close();
			cout << "Wyczyszczono!";
		}
		break;
		}
		cout << endl;
		cout << "Czy chcesz powrocic do menu (t/n)? :  ";
		cin >> znak;
		system("cls");
	} while (znak != 'n');
}

int main(int argc, char *argv[])
{


	menuGlowne();

	system("notepad.exe program.cpp");

	return 0;

}


