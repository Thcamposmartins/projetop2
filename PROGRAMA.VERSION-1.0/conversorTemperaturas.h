#ifndef CONVERSORTEMPERATURAS_H_INCLUDED
#define CONVERSORTEMPERATURAS_H_INCLUDED
#include"MENU.h"
void conversorTemperaturas(int& op);
void conversorTemperaturas(int& op) {
	int escolha, op;
	char voltar, refazer;
	double kelvin, tempCel, celsius,tempKel,fahrenhiet,tempFahr;
	cout << "Escolha uma opção: ";
	cout << "1 - Converter de Celsius para Kelvin";
	cout << "2 - Converter de Kelvin para Celsius";
	cout << "3 - Converter de Celsius para Fahrenhiet";
	cout << "4 - Converter de Fahrenhiet para Celsius";
	cout << "5 - Converter de Kelvin para Fahrenhiet";
	cout << "6 - Converter de Fahrenhiet para Kelvin";
	cin >> escolha;
	switch (escolha)
	{
	case 1:
		cout << "Digite o valor da temperatura em Celsius: ";
		cin >> tempCel;
		kelvin = tempCel + 273;
		cout << "O valor da temperatura em Kelvin é: " << kelvin;
		break;
	case 2:
		cout << "Digite o valor da temperatura em Kelvin: ";
		cin >> tempKel;
		celsius = tempKel - 273;
		cout << "O valor da temperatura em Celsius é: " << celsius;
		break;
	case 3:
		cout << "Digite o valor da temperatura em Celsius: ";
		cin >> tempCel;
		fahrenhiet = 1.8 * tempCel + 32;
		cout << "O valor da temperatura em fahrenhiet é: " << fahrenhiet;
		break;
	case 4:
		cout << "Digite o valor da temperatura em fahrenhiet: ";
		cin >> tempFahr;
		celsius = (tempFahr - 32) / 1.8;
		cout << "O valor da temperatura em celsius é: " << celsius;
		break;
	case 5:
		cout << "Digite o valor da temperatura em kelvin: ";
		cin >> tempKel;
		fahrenhiet = (9 * (tempKel - 273) / 5) + 32;
		cout << "O valor da temperatura em fahrenhiet é: " << fahrenhiet;
		break;
	case 6:
		cout << "Digite o valor da temperatura em fahrenhiet: ";
		cin >> tempFahr;
		kelvin = (5 * (tempFahr - 32) / 9) + 273;
		cout << "O valor da temperatura em kelvin é: " << kelvin;
		break;
	}
	cout << "Deseja voltar para o menu? (y/n)";
	cin << voltar;
	if (voltar == 'y') {
		system('cls');
		menu(op);
	}
	else
	{
		system('cls');
		cout << "Deseja fazer outra conversão? (y/n)";
		cin << refazer;
		if (refazer == y) {
			conversorTemperaturas(op);
		}
		else
		{
			system('exit');
		}
	}
}


#endif // CONVERSORTEMPERATURAS_H_INCLUDED
