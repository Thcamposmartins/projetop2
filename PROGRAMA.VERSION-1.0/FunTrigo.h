#ifndef FUNTRIGO_H_INCLUDED
#define FUNTRIGO_H_INCLUDED
void FunTrigo(int& op);
void FunTrigo(int& op)
{
	int grau;
	cout<<"Seno,Cosseno e Tangente"<< endl;
    cout<<"Digite o grau: "<<endl;
    cin>>grau;
    cout<<"O Seno,Cosseno e Tangente de "<< grau <<" é respectivamente: "<< endl;
    cout<<"Seno: " <<sin(grau)<< endl;
    cout<<"Cosseno: "<<cos(grau)<< endl;
    cout<<"Tangente: "<<tan(grau)<< endl;
}


#endif // FUNTRIGO_H_INCLUDED
