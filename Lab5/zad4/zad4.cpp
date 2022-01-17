#include<iostream>
using namespace std;

long long int silniaRek(int a)
{
	if (a == 1 || a == 0)
	{
		return 1;
	}else
	{
		return silniaRek(a - 1) * a;
	}
}

long long int silniaIter(int a)
{
	int silnia = 1;
	for (int i = 1; i <= a; i++)
	{
		silnia = silnia * i;

	}
	return silnia;
}

int main()
{
	int n;
	cout << "Oblicz silnie z= ";
	cin >> n;
	cout << "### Silnia Rekurencyjnie ###"<<endl;
	cout << silniaRek(n);
	cout << endl << "---------------------------" << endl <<"### Silnia Iteracyjnie ###" << endl;
	cout << silniaIter(n);
	return 0;
}
