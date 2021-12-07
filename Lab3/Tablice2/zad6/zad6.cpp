#include<iostream>
using namespace std;
int main()
{
	char text[50];
	int spol=0, samo=0,space=0;
	cout << "Podaj tekst do weryfikacji (bez polskich znakow oczywiscie): ";
	cin.get(text, 50);
	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == 'a' || text[i] == 'A' || text[i] == 'e' || text[i] == 'E' || text[i] == 'y' || text[i] == 'Y' || text[i] == 'i' || text[i] == 'I' || text[i] == 'o' || text[i] == 'O' || text[i] == 'u' || text[i] == 'U')samo++;
		else if (text[i] == ' ')space++;
		else spol++;
	}
	cout <<"\nTekst zawiera: " << samo << " samoglosek oraz " << spol << " spolglosek oraz "<<space<<" spacji";

	return 0;
}