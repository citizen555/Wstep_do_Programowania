#include<iostream>
using namespace std;

float ciag(int a)
{
	if (a == 1)
	{
		return 0;
	}else if (a == 2)
	{
		return 0.5;
	}else
	{
		return -1 * a * ciag(a - 1);
	}
}

int main()
{
	int n;
	cout << "Oblicz n-ty elemant ciagu n= ";
	cin >> n;
	cout << ciag(n);
	return 0;
}
