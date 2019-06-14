#ifndef AREAGEOMETRICA_H_INCLUDED
#define AREAGEOMETRICA_H_INCLUDED
#include<iostream>
#include<cmath>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void areaGeometrica(int& op);
void areaGeometrica(int& op) {
    double base, altura, area,lado,baseMaior, baseMenor,diagMenor, diagMaior;
	int escolha, op;
	char voltar, refazer;
	cout << "Escolha uma opção: ";
	cout << "1 - Area de um quadrado";
	cout << "2 - Area de um retangulo";
	cout << "3 - Area de um trapezio";
	cout << "4 - Area de um tringulo";
	cout << "5 - Area de um losango";
	cin >> escolha;
	switch (escolha) {
	case 1:
		cout << "Digite o valor do lado do quadrado: ";
		cin >> lado;
		area = lado * lado;
		cout << "O valor da área é: " << area;
		break;
	case 2:

		cout << "Digite o valor da base do retangulo: ";
		cin >> base;
		cout << "Digite o valor da altura do retangulo: ";
		cin >> altura;
		area = base * altura;
		cout << "O valor da área é: " << area;
		break;
	case 3:
		cout << "Digite o valor da base maior: ";
		cin >> baseMaior;
		cout << "Digite o valor da base menor: ";
		cin >> baseMenor;
		cout << "Digite o valor da altura: ";
		cin >> altura;
		area = ((baseMaior + baseMenor) * altura) / 2;
		cout << "O valor da área é: " << area;
		break;
	case 4:
		cout << "Digite o valor da base: ";
		cin >> base;
		cout << "Digite o valor da altura: ";
		cin >> altura;
		area = (base * altura) / 2;
		cout << "O valor da área é: " << area;
		break;
	case 5:
		double diagMenor, diagMaior, area;
		cout << "Digite o valor da Diagonal maior: ";
		cin >> diagMaior;
		cout << "Digite o valor da Diagonal menor: ";
		cin >> diagMenor;
		area = (diagMaior + diagMenor) / 2;
		cout << "O valor da área é: " << area;
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
		cout << "Deseja refazer a operação? (y/n)";
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


#endif // AREAGEOMETRICA_H_INCLUDED
