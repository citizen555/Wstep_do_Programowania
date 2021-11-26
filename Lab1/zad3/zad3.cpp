#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Podaj a= ";
	cin >> a;
	cout << "Podaj b= ";
	cin >> b;
	if (a > b) {
		cout << "Liczba a jest wieksza";
	}if (b > a) {
		cout << "Liczba b jest wieksza";
	}
	else {
		cout << "Liczby a i b sa rowne";
	}
	return 0;
}