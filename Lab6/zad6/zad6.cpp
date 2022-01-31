#include<iostream>
using namespace std;
void znaki(int ilosc, char znak)
{
	for (int i = 0; i < ilosc; i)
	{
		for (int i = 0; i < ilosc; i++)
		{
			cout << znak;
		}
		cout << endl;
		ilosc--;
	}
}
int main()
{
	float* ptr1;
	char* ptr2;
	float ilosc = 0;
	char znak = 0;
	ptr1 = &ilosc;
	ptr2 = &znak;

	cout << "Podaj znak: ";
	cin >> znak;
	cout << "Podaj ilosc wyswietlen: ";
	cin >> ilosc;
	znaki(*ptr1, *ptr2);
}