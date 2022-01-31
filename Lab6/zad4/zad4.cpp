#include<iostream>
using namespace std;
void kwadrat(float liczba)
{
	cout << liczba << "^2= " << liczba * liczba;
}
int main()
{
	float* ptr;
	float liczba;
	ptr = &liczba;
	cout << "Podaj liczbe do ^2: ";
	cin >> liczba;
	kwadrat(*ptr);
}