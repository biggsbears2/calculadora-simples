#include <iostream>
using namespace std;

int main()
{
	double numero1, numero2;

	string sinais;

	cout << "Digite primeiro valor: " << endl;
	cin >> numero1;

	cout << "Qual tipo de operacao: " << endl;
	cin >> sinais;

	cout << "Digite segundo valor: " << endl;
	cin >> numero2;

	if (sinais == "+")
	{
		cout << "Resultado: " << numero1 + numero2 << endl;
	} else if (sinais == "-")
	{ 
		cout << "Resultado: " << numero1 - numero2 << endl;
	}
	else if (sinais == "x")
	{
		cout << "Resultado: " << numero1 * numero2 << endl;
	}
	else if (sinais == "/")
	{
		cout << "Resultado: " << numero1 / numero2 << endl;
	}
	else {
		cout << "Sinal invalido";
	}
	return 0;

}
