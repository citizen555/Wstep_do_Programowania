#include<iostream>
using namespace std;

int nwd(int a, int b)
{
	if (b != 0)
	{
		return nwd(b, a % b);
	}else
	{
		return a;
	}
}

int main()
{
	int n,m;
	cout << "Podaj liczby do nwd: (a|b) ";
	cin >> n;
	cout << n << " | ";
	cin >> m;
	cout<<"Nwd wynosi "<<nwd(n, m);
	return 0;
}