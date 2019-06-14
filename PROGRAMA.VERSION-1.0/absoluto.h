#ifndef ABSOLUTO_H_INCLUDED
#define ABSOLUTO_H_INCLUDED
void absoluto(int& op);
void absoluto(int& op)
{
	float lala;
	cout<<"Valor absoluto!!"<<endl;
    cout<<"Digite um numero,negativo ou positivo: ";
    cin>>lala;
    cout<<"O valor absoluto de "<< lala <<"é: "<< fabs(lala);

}


#endif // ABSOLUTO_H_INCLUDED
