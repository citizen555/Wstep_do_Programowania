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
			suma = suma + pkt;
			i++;
		}
		cout << endl << "srednia punktow " << n << " studentow wynosi " << suma / n;
	}
	else {
		cout << "Podaj prawidlowa liczbe studentow";
	}

	return 0;
}