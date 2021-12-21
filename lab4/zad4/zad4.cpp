#include<iostream>
using namespace std;
void przelicz(long long int);
int main()
{
	long long int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	if (liczba < 0 || liczba>30)
	{
		cout << "\nPodaj liczbe z przedzialu 0-30\n";
		return 0;
	}
	przelicz(liczba);
	return 0;
}
void przelicz(long long int a)
{
	long long int silnia = 1;
	if (a == 0)
	{
		cout << "Silnia dla " << a << " wynosi " << 1;
		return;
	}
	else if (a % 2 == 0)
	{
		for (int i = a; i != 0; i = i - 2)
		{
			silnia = silnia * i;
		}
		cout << "Silnia dla " << a << " wynosi " << silnia;
		return;
	}
	else if (a % 2 == 1)
	{
		for (int i = a; i >= 1; i = i - 2)
		{
			silnia = silnia * i;
		}
		cout << "Silnia dla " << a << " wynosi " << silnia;
		return;
	}
}