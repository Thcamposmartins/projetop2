#ifndef GRAURAD_H_INCLUDED
#define GRAURAD_H_INCLUDED
#define PI 3.1415
void GrauRad(int& op);
void GrauRad(int& op) {
	int escolha;
	double valor;
	printf("Digite 1 para converter de graus para radianos\n");
	printf("Digite 2 para converter de radianos para graus\n");
	scanf("%i", &escolha);
	while (escolha > 2 || escolha < 1)
	{
		printf("nao foi possivel efetuar nada, digite um dos numeros apresentados!!\n");
		printf("Digite 1 para converter de graus para radianos\n");
		printf("Digite 2 para converter de radianos para graus\n");
		scanf("%i", &escolha);
	}
	switch (escolha)
	{
	case 1:
		printf("Digite um valor\n");
		scanf("%lf", &valor);
		valor = valor * PI / 180;
		printf("Em radianos fica: %lf\n", valor);
		system("pause");
		break;

	default:
		printf("Digite um valor\n");
		scanf("%lf", &valor);
		valor = valor * 180 / PI;
		printf("Em graus fica: %lf\n", valor);
		system("pause");

	}
}


#endif // GRAURAD_H_INCLUDED
