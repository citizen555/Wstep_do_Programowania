#include<iostream>
using namespace std;
int main() {
	int n, i = 0;
	float pkt = 0, suma = 0;
	cout << "Podaj liczbe studentow ";
	cin >> n;

	if (n > 0) {
		while (i < n) {
			cout << "podaj liczbe punktow studenta ";
			cin >> pkt;
			if (pkt >= 0 && pkt <= 100)
			{
				suma = suma + pkt;
				i++;
			}
			else 
			{
				cout << "ilosc punktow ma byc z zakersu 0-100";
				break;
			}
		cout << endl << "srednia punktow " << n << " studentow wynosi " << suma / n;
	}
	else {
		cout << "Podaj prawidlowa liczbe studentow";
	}

	return 0;
}