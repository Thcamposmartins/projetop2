#ifndef PORCENTAGEM_H_INCLUDED
#define PORCENTAGEM_H_INCLUDED
void porcentagem(int& op);
void porcentagem(int& op){
	double p1, p2;
	double r;
	cout << "\tPORCENTAGEM" << endl;
	cout << "ESCOLHA A OPC�O DESEJADA" << endl;
	cout << "1- Diferen�a de Porcentagens" << endl;
	cout << "2- Soma de Porcentagem" << endl;
	cout << "3- Porcentagem de um N�mero" << endl;
	cout << "4- Adi��o e subtra��o da porcentagem de um N�mero Ex:(N+%) ";
	cout << "5- Retornar ao Menu Principal" << endl;
	cout << "6- Sair do programa\n >>";
	cin >> op;
	switch (op) {
	case 1:
		system("cls");
		cout << "\tDIFEREN�A DE PORCENTAGENS" << endl;
		cout << "Informe o primeiro valor em porcentagem(%):" << endl;
		cin >> p1;
		cout << "Informe o segundo valor em porcentagem(%):" << endl;
		cin >> p2;
		r = ((p1 / 100) * (p2 / 100) * 100);
		cout << "Resultado =" << r;
		system("pause");
		break;
	case 2:
		system("cls");
		cout << "\tSOMA DE PORCENTAGENS" << endl;
		cout << "Informe o primeiro valor em porcentagem(%):";
		cin >> p1;
		cout << "Informe o segundo valor em porcentagem(%):";
		cin >> p2;
		r = ((p1 / 100) + (p2 / 100) * 100);
		cout << "Resultado =" << r;
		system("pause");
		break;
	case 3:
		system("cls");
		cout << "\tPORCENTAGEM DE UM N�MERO" << endl;
		cout << "Informe o n�mero:";
		cin >> p1;
		cout << "Informe o valor em porcentagem(%):";
		cin >> p2;
		r = (p1 * (p2 / 100));
		cout << "Resultado =" << r;
		system("pause");
		break;
	case 4:
		char c;
		do {
			char s;
			system("cls");
			cout << "ADI��O E SUBTRA��O DA PORCENTAGEM DE UM N�MERO" << endl;
			cout << "Digite o numero e a porcentagem, respectivamente:";
			cin >> p1 >> s >> p2;

			if (s == '+') {
				r = (p1)+(p1 * (p2 / 100));
				cout << "Resultado =" << r;
				system("pause");
			}
			if (s == '-') {
				r = (p1)-(p1 * (p2 / 100));
				cout << "Resultado =" << r;
				system("pause");
			}
			cout << "\nDeseja repetir?:";
			cin >> c;
		} while (c == 'S' || c == 's');
	case 5:
		system("cls");
		// retorna ao menu principal;
		break;
	case 6:
		system("cls");
		break;
	default:
		cout << "VOCE DIGITOU ALGO ERRADO, TENTE NOVAMENTE" << endl;
	}
}

#endif // PORCENTAGEM_H_INCLUDED
