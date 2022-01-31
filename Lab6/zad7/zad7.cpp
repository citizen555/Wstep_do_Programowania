#include<iostream>
using namespace std;
void znaki(int* liczba1, int* liczba2)
{
	if (*liczba1 > *liczba2)
	{
		cout << "Mniejsza liczba to " << *liczba2 << " " << "zapisana pod adresem " << liczba2;
	}
	else if (*liczba1 < *liczba2)
	{
		cout << "Mniejsza liczba to " << *liczba1 << " " << "zapisana pod adresem " << liczba1;
	}
	else
	{
		cout << "Liczba " << *liczba1 << " i " << *liczba2 << " sa rowne i zapisane pod adresami " << liczba1 << " " << liczba2;
	}
}
int main()
{
	int* ptr1, * ptr2;
	int liczba1, liczba2;
	ptr1 = &liczba1;
	ptr2 = &liczba2;

	cout << "Podaj pierwsza liczbe: ";
	cin >> *ptr1;
	cout << "Podaj druga liczbe: ";
	cin >> *ptr2;
	znaki(ptr1, ptr2);
}