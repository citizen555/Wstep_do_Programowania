#include<iostream>
using namespace std;
int main() {
	float liczba, lujemne = 0, ldodatnie = 0, sumauj = 0, sumadod = 0;
	cout << "podaj 10 liczb" << endl;
	for (int i = 0; i < 10; i++) {

		cin >> liczba;
		if (liczba < 0) {
			lujemne++;
			sumauj = sumauj + liczba;
		}
		else {
			ldodatnie++;
			sumadod = sumadod + liczba;
		}
	}

	cout << "liczby ujemne ilosc: " << lujemne << " suma: " << sumauj << endl;
	cout << "liczby dodatnie ilosc: " << ldodatnie << " suma: " << sumadod << endl;
	return 0;
}