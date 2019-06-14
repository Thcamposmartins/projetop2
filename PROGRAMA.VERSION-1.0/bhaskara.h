#ifndef BHASKARA_H_INCLUDED
#define BHASKARA_H_INCLUDED
void bhaskara(int& op);
void bhaskara(int& op) {
	float a, b, c;
	printf("Digite os valores de a,b,c: ");
	scanf("%f %f %f", &a, &b, &c);

	float x = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
	float y = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
	printf("\nA raiz de x1: %.2f\n", x);
	printf("\nA raiz de x2: %.2f\n", y);
	system("pause");
}


#endif // BHASKARA_H_INCLUDED
