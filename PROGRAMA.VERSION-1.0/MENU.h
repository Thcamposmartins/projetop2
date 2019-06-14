#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include<iostream>
#include<cmath>
#include <stdlib.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void menu(int& op);
void jurosSC(int& op);
void fatorial(int& op);
void porcentagem(int& op);
void GrauRad(int& op);
void bhaskara(int& op);
void perimetro(int& op);
void hipotenusa(int& op);
void areaGeometrica(int& op);
void conversorTemperaturas(int& op);
void raiz(int& op);
void absoluto(int& op);
void FunTrigo(int& op);
using namespace std;
void menu(int& op);
void menu(int& op) {
	cout << "*****CALCULADORA*****";
	cout << "DIGITE A OPÇÃO DESEJADA" << endl;
	cout << "1- JUROS SIMPLES E COMPOSTOS" << endl;
	cout << "2- PORCENTAGEM" << endl;
	cout << "3- BASKARA" << endl;
	cout << "4- HIPOTENUSA" << endl;
	cout << "5- PERIMETRO" << endl;
	cout << "6- RAIZ" << endl;
	cout << "7- VALOR ABSOLUTO" << endl;
	cout << "8- SENO, COSSENO E TANGENTE" << endl;
	cout << "9- CONVERSÃO DE MEDIDAS" << endl;
	cout << "10- CONVERSÃO DE BASES" << endl;
	cout << "11- CONVERSÃO DE ANGULOS" << endl;
	cout << "12- FATORIAL" << endl;
	cout << "13- AREAS GEOMETRICAS" << endl;
	cout << "14- CONVERSÃO DE TEMPERATURAS" << endl;
	cout << "15- OPERAÇÕES BÁSICAS\n>>";
	cin >> op;
	switch (op) {
	case 1:
		system("cls");
		jurosSC(op);
		break;
	case 2:
		system("cls");
		porcentagem(op);
		break;
	case 3:
		system("cls");
		bhaskara(op);
		break;
	case 4:
		system("cls");
		hipotenusa(op);
		break;
	case 5:
		system("cls");
		perimetro(op);
		break;
	case 6:
		system("cls");
		raiz(op);
		break;
	case 7:
		system("cls");
		absoluto(op);
		break;
	case 8:
		system("cls");
		absoluto(op);
		break;
	case 9:
		system("cls");
		break;
	case 10:
		system("cls");
		break;
	case 11:
		system("cls");
		break;
	case 12:
		system("cls");
		fatorial(op);
		break;
	case 13:
		system("cls");
		areaGeometrica(op);
		break;
	case 14:
		system("cls");
		conversorTemperaturas(op);
		break;
	}
}
#endif // MENU_H_INCLUDED
