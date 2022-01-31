#include<iostream>
using namespace std;
void zamiana(int* liczba1, int* liczba2)
{
	int temp = *liczba2;
	*liczba2 = *liczba1;
	*liczba1 = temp;
	cout << "Pierwsza liczba to " << *liczba1 << " a druga to " << *liczba2;
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
	zamiana(ptr1, ptr2);
}