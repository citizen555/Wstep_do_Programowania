#include<iostream>
using namespace std;
int main()
{
	char imie[20];
	char nrAlbumu[6];
	char imie2[20];
	int dlugoscLini;

	cout << "Podaj imie i nazwisko: ";
	cin.get(imie, 20).get();
	cout << "Podaj numer albumu: ";
	cin.get(nrAlbumu, 6).get();

	strcpy_s(imie2, imie);
	dlugoscLini = strlen(imie);

	cout << "Nazywasz sie: " << imie << endl;
	cout << "Nazywasz sie: " << imie << " po skopiowaniu" << endl;
	cout << "Twoj nr albumu to: " << nrAlbumu << endl;
	cout << "Twoje imie ma " << dlugoscLini << " znakow dlugosci";

	return 0;
}