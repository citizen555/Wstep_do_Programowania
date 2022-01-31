#include<iostream>
using namespace std;
int main()
{
	int zmienna = 0, zmiennadwa = 0, zmiennatrzy = 7;
	int* wskaznik, * wskaznikdwa, * wskazniktrzy;
	wskaznik = &zmienna;
	cout << wskaznik << endl << endl;

	cout << "Podaj wartosc zmiennej= ";
	cin >> zmiennadwa;
	wskaznikdwa = &zmiennadwa;
	cout << endl << wskaznikdwa << "   " << zmiennadwa;

	cout << endl << endl << "roznica wynosi=   " << zmienna - zmiennadwa;

	wskazniktrzy = &zmiennatrzy;
	cout << endl << endl << "srednia wynosi= " << (double)(zmienna + zmiennadwa + zmiennatrzy) / 3.0;
}