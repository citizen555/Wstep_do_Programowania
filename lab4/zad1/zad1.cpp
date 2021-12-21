#include<iostream>
using namespace std;

void kolo(double a);
void prostokat(double a, double b);
void trojkat(double a, double b);
void szescian(double a);
void walec(double a, double b);

int main()
{
	int wybor;
	double a, b;

	cout << "Wybierz program (liczbe): \n";
	cout << " 1. Pole i objetosc kola\n";
	cout << " 2. Pole i objetosc prostokata\n";
	cout << " 3. Pole i objetosc trojkata\n";
	cout << " 4. Pole i objetosc szescianu\n";
	cout << " 5. Pole i objetosc walca\n";
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		cout << "podaj r= ";
		cin >> a;
		if (a > 0)
		{
			kolo(a);
		}
		else "Podaj poprawne dane";
		break;
	case 2:
		cout << "podaj a= ";
		cin >> a;
		cout << "podaj b= ";
		cin >> b;
		if (a > 0 && b > 0)
		{
			prostokat(a, b);
		}
		else "Podaj poprawne dane";
		break;
	case 3:
		cout << "podaj a= ";
		cin >> a;
		cout << "podaj h= ";
		cin >> b;
		if (a > 0 && b > 0)
		{
			trojkat(a, b);
		}
		else "Podaj poprawne dane";
		break;
	case 4:
		cout << "podaj a= ";
		cin >> a;
		if (a > 0)
		{
			szescian(a);
		}
		else "Podaj poprawne dane";
		break;
	case 5:
		cout << "podaj r= ";
		cin >> a;
		cout << "podaj H= ";
		cin >> b;
		if (a > 0 && b > 0)
		{
			walec(a, b);
		}
		else "Podaj poprawne dane";

		break;
	}

	return 0;
}


void kolo(double a)
{
	cout << "\nPole kola wynosi: " << a * a * 3.14;
}
void prostokat(double a, double b)
{
	cout << "\nPole prostokata wynosi: " << a * b;
}
void trojkat(double a, double b)
{
	cout << "\nPole trojkata wynosi: " << (a * b) / 2;
}
void szescian(double a)
{
	cout << "\nPole szescianu wynosi: " << a * a * a;
}
void walec(double a, double b)
{
	cout << "\nPole walca wynosi: " << a * a * 3.14 * b;
}