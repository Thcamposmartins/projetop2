#include<iostream>
#include<cmath>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<cstdlib>
#ifndef BHASKARA_H_INCLUDED
#define BHASKARA_H_INCLUDED
void bhaskara(int& op);

void bhaskara(int& op) {
	float a, b, c;
	char voltar;
	printf("Digite os valores de a,b,c: ");
	scanf("%f %f %f", &a, &b, &c);

	float x = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
	float y = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
	printf("\nA raiz de x1: %.2f\n", x);
	printf("\nA raiz de x2: %.2f\n", y);
	system("pause");
	printf("\nDeseja voltar para o menu? (s/n)");
	scanf("%s",&voltar);
	if (voltar == 's') {
		system('cls');
		menu(op);
	}
	else	{
		system('cls');
		printf("Deseja refazer a operaçăo? (s/n)");
		scanf("%s",&voltar);
		if (voltar == 's') {
			bhaskara(op);
		}
		else		{
		system('exit');
		}	}}
#endif // BHASKARA_H_INCLUDED

