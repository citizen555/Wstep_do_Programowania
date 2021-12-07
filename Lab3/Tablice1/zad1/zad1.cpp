#include<iostream>
using namespace std;
int main()
{
	int tab[10];
	int temp=3;
	for (int i = 0; i < 10; i++)
	{
		tab[i] = temp;
		temp += 3;
		cout << tab[i] << " ";
	}
	return 0;
}