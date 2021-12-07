#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int tab[20], min;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % -50 - 50;
		tab[i + 10] = tab[i];
	}
	for (int i = 0; i < 20; i++)
	{
		cout << tab[i] << " ";
	}

	return 0;
}