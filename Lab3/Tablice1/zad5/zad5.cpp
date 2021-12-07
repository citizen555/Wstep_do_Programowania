#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int tab[10], a, b;
	cout << "Podaj a: ";
	cin >> tab[0];
	cout << "Podaj b: ";
	cin >> tab[1];
	for (int i = 2; i < 10; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << tab[i] << " ";
	}
	return 0;
}