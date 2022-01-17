#include<iostream>
using namespace std;

int fib(int a)
{
	if(a == 0)
	{
		return 0;
	}else if(a>2)
	{
		return fib(a - 2) + fib(a - 1);
	}else if(a <= 2)
	{
		return 1;
	}
}

int main()
{
	int a;
	cout << "Podaj ilosc ilemantow ciagu Fibanaccego: ";
	cin >> a;
	cout<<fib(a);
	return 0;
}