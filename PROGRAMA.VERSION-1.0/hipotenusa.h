#ifndef HIPOTENUSA_H_INCLUDED
#define HIPOTENUSA_H_INCLUDED
void hipotenusa(int& op);
void hipotenusa(int& op) {
	float cat1, cat2;
	printf("Digite os valores para os catetos 1 e 2 :\n ");
	scanf("%f %f", &cat1, &cat2);
	float h = sqrt((cat1 * cat1) + (cat2 * cat2));
	printf("\nO valor da Hipotenusa e: %.2f\n", h);
	system("pause");
}


#endif // HIPOTENUSA_H_INCLUDED
