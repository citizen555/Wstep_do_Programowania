#include<iostream>
#include <windows.h> 
#include <time.h> 
using namespace std;
int main()
{
	int n, liczba = 0, suma = 0;
	srand(time(NULL));
	cout << "podaj ilosc liczb: ";
	cin >> n;

	if (n > 0) {
		for (int i = 0; i < n; i++)
		{
			liczba = rand() % 56 + -15;
			cout << "wylosowano: " << liczba << endl;
			if (liczba % 2 == 0) {
				suma = suma + liczba;
			}
		}
	}
	else {
		cout << "podaj prawidlowa ilosc!!!";
	}
	cout << "Suma wynosi " << suma;

	return 0;
}