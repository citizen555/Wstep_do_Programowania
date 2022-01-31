#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int a, b;
	float* tab;
	float avg = 0;
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
		avg = avg + tab[i];
	}

	cout << endl << "AVG wynosi= " << avg / (b - a) << endl;
	cout << "Elemeny wieksze od sreniej to: " << endl << endl;

	for (int i = 0; i < b - a; i++)
	{
		if (tab[i] > avg / (b - a))
		{
			cout << tab + i << "	" << tab[i] << "	" << endl;
		}
	}
	delete tab;
}