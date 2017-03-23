#include <iostream>

using namespace std;

void primos();

int main()
{
	primos();

	return 0;
}

void primos()
{
	int i = 2;
	int numero;
	int factores[1000];
	int factores_i = 0;

	cout << "Digite el numero: " << endl;
	cin >> numero;

	while (i <= numero)
	{
		if ((numero%i) == 0)
		{
			factores[factores_i] = i;
			numero = numero / i;
			factores_i++;
			continue;
		}
		i++;
	}
	i = 0;
	cout << " " << endl;

	while (i < factores_i)
	{
		cout << factores[i] << endl;
		i++;
	}	
}