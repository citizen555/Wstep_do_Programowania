#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int a, b;
	float* tab;
	srand(time(NULL));

	cout << "Podaj poczatek zakresu: ";
	cin >> a;
	cout << "Podaj koniec zakresu: ";
	cin >> b;

	tab = new float[b - a];

	for (int i = 0; i < b - a; i++)
	{
		tab[i] = rand() % (b - a) + a;
		cout << tab + i << "	" << tab[i] << "	" << endl;
	}
	delete tab;
}