#include<iostream>
using namespace std;
int main()
{
	float a, b;
	int menu;
	cout << "Podaj a = "; cin >> a;
	cout << "Podaj b = "; cin >> b;

	cout << endl << "_-_-_-_Co chcesz zrobic_-_-_-_" << endl << endl;
	cout << "1.Suma" << endl;
	cout << "2.Roznica" << endl;
	cout << "3.Iloraz" << endl;
	cout << "4.Iloczyn" << endl;
	cin >> menu;
	cout << endl;

	switch (menu) {
		case 1: {
			cout << "Suma a+b wynosi = " << a + b;
			break;
		}
		case 2: {
			cout << "Roznica a-b wynosi = " << a - b;
			break;
		}
		case 3: {
			cout << "Iloraz a/b wynosi = " << a / b;
			break;
		}
		case 4: {
			if (a != 0) {
				cout << " Iloczyn a*b wynosi = " << a * b;
			}
			else if (b != 0) {
				cout << " Iloczyn a*b wynosi = " << a * b;
			}
			else {
				cout << "Nie mozna dzielic przez 0";
			}
			break;
		}
		default:
		{
			cout << "Podaj liczbe 1-4";
		}
	}
	return 0;
}