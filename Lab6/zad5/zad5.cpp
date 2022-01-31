#include<iostream>
using namespace std;
float potega(float liczba1, float liczba2)
{
	long float* ptrwynik;
	long float wynik = 1;
	ptrwynik = &wynik;
	for (int i = 0; i < liczba2; i++)
	{
		wynik = wynik * liczba1;
	}
	return *ptrwynik;
}
int main()
{
	float* ptr1, * ptr2;
	float liczba1, liczba2;
	ptr1 = &liczba1;
	ptr2 = &liczba2;
	cout << "Podaj podstawe potegi: ";
	cin >> liczba1;
	cout << "Podaj wykladnik potegi: ";
	cin >> liczba2;
	cout << *ptr1 << "^" << *ptr2 << "= " << potega(*ptr1, *ptr2);
}