#include<iostream>
using namespace std;
void przelicz(int);
int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	przelicz(liczba);
	return 0;
}
void przelicz(int a)
{
	int lbin[32], i = 0;
	cout << a << "(10) ---> ";
	while (a != 0)
	{
		lbin[i] = a % 2;
		a = a / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		cout << lbin[j];
	}
	cout << "(2)";
}