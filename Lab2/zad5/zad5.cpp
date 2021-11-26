#include<iostream>
using namespace std;
int main() {

	int n, liczba = 0, suma = 0;
	cout << "podaj ilosc liczb: ";
	cin >> n;

	if (n > 0) {
		for (int i = 0; i < n; i++)
		{
			cout << "Podaj liczbe: ";
			cin >> liczba;

			if (liczba % 2 == 0) {
				suma = suma + liczba;
			}

		}
	}

	cout << "Suma wynosi " << suma;
	return 0;
}