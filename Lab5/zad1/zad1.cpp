#include<iostream>
using namespace std;

void konw(int a)
{
	if (a > 0)
	{
		konw(a / 2);
		cout << a % 2;
	}
}

int main()
{
	int n;
	cout << "Podaj liczbe do konwersji= ";
	cin >> n;
	konw(n);

	return 0;
}