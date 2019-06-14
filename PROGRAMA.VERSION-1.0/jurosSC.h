#ifndef JUROSSC_H_INCLUDED
#define JUROSSC_H_INCLUDED
void jurosSC(int& op);
void jurosSC(int& op) { // funcao da  opcao numero dois
	cout << "\tJUROS SIMPLES E COMPOSTOS" << endl;
	cout << "ESCOLHA A OPÇÃO DESEJADA" << endl;
	cout << "1- Juros Simples" << endl;
	cout << "2- Juros Compostos" << endl;
	cout << "3- Voltar ao Menu Principal" << endl;
	cin >> op;
	switch (op) {
		double J, P, i, n, M;
	case 1:
		system("cls");
		cout << "\tJUROS SIMPLES" << endl;
		cout << "Informe o capital:";
		cin >> P;
		cout << "Informe a Taxa de Juros(%):";
		cin >> i;
		cout << "Informe o periodo de tempo(EM MESES):";
		cin >> n;
		J = (P * (i / 100)) * n;
		M = P + J;
		cout << "Juros=" << J << endl << "Montante+Juros=" << M << endl;
		system("pause");
		break;
	case 2:
		system("cls");
		cout << "\tJUROS COMPOSTOS" << endl;
		cout << "Informe o capital:";
		cin >> P;
		cout << "Informe a Taxa de Juros(%):";
		cin >> i;
		cout << "Informe o periodo de tempo(EM MESES):";
		cin >> n;
		M = P * (pow(1 + (i / 100), n));
		cout << "Juros=" << M - P << endl << "Montante+Juros=" << M << endl;
		system("pause");
		break;
	case 3:
		//voltar menu principal
		break;
	default:
		cout << "VOCÊ DIGITOU ALGO ERRADO, TENTE NOVAMENTE";
	}
}
#endif // JUROSSC_H_INCLUDED
