#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int tab1[5][5];
	int tab2[5][5];
	int sumaTab[5][5];
	srand(time(NULL));

	cout << "Macierz 1"<<endl << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			tab1[i][j] = rand()%100-50;
			cout << tab1[i][j] << "\t";
		}
		cout << endl<<endl;
	}

	cout << "Macierz 2"<<endl << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			tab2[i][j] = rand() % 100 - 50;
			cout << tab2[i][j] << "\t";
		}
		cout << endl << endl;
	}

	cout << "suma macierzy"<<endl << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sumaTab[i][j] = tab1[i][j] + tab2[i][j];
			cout << sumaTab[i][j] << "\t";
		}
		cout << endl << endl;
	}

	return 0;
}
