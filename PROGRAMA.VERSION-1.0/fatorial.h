#ifndef FATORIAL_H_INCLUDED
#define FATORIAL_H_INCLUDED
void fatorial(int& op);
void fatorial(int& op)
{
	int result;
	int valor;
	printf("Informe o numero a ser fatorado:");
	scanf("%i", &valor);
	for (result = 1; valor > 1; valor = valor - 1)
	{
		result = result * valor;
	}
	printf("%i\n", result);
	system("pause");
}
#endif // FATORIAL_H_INCLUDED
