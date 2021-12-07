#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int tab[5][5], suma = 0;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			tab[i][j] = rand() % 100 - 50;
			cout << tab[i][j] << "\t";
			if (i == j)suma = suma + tab[i][j];
		}
		cout << endl;
	}
	cout << "suma wynosi: " << suma;
	return 0;
}