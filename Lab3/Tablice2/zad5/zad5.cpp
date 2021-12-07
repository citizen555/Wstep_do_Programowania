#include<iostream>
using namespace std;
int main()
{
	char ulica[20],nrDomu[10];
	int skill, staz;

	cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
	cin.get(ulica, 20).get();
	cout << "Podaj nr domu: ";
	cin.get(nrDomu, 10).get();
	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2-5]: ";
	cin >> skill;
	cout << "Twoj staz programistyczny ";
	cin >> staz;

	cout << "Adres: " << ulica << " " << nrDomu << endl;
	if (skill <= 2)
	{
		cout << "Ocena: 2"<<endl;
	}
	else if (skill > 5)
	{
		cout << "Oena: Nie przeceniaj sie"<<endl;

	}else cout << "Ocena: " << skill - 1<<endl;
	cout << "Staz: " << staz;

	return  0;
}