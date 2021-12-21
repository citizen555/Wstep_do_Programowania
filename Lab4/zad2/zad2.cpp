#include<iostream>
using namespace std;

bool sprawdz(int a);

int main()
{
	int liczba;
	cout << "Podaj liczbe pierwsza : ";
	cin >> liczba;
	cout << sprawdz(liczba);
	return 0;
}

bool sprawdz(int a)
{
	int temp = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)temp++;
	}
	if (temp == 2)return true;
	else return false;
}