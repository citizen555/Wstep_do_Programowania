#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Podaj liczbe do sprawdzenia = ";
	cin >> a;
	if (a % 2 == 0) {
		cout << "Podana liczba jest parzysta";
	}
	else {
		cout << "Podana licznba jest nieparzysta";
	}
	return 0;
}