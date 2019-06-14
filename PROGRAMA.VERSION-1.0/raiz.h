#ifndef RAIZ_H_INCLUDED
#define RAIZ_H_INCLUDED
void raiz(int& op)
{
	int x;
	double y, k;
	cout<<"Obter a raiz"<<endl;
    cout<<"Digite o indice: "<<endl;
    cin>> y;
    cout<< "Digite o valor desejado: "<<endl;
    cin>>x;
    y=1/y;
    k = pow(x,y);
	cout<< "A raiz de " << x <<" é " << k << endl;
}
#endif // RAIZ_H_INCLUDED
