#ifndef PERIMETRO_H_INCLUDED
#define PERIMETRO_H_INCLUDED
void perimetro(int& op);
void perimetro(int& op) {
	float valorLado, l;
    int lado,i;
    char x;
    printf("\nA figura possui lados diferentes s/n :\n");
    scanf("%c",&x);
    printf("\nQuantos lados a figura possui? \nCaso seja um circulo digite 0:\n\n");
    scanf("%d",&lado);
    if(x=='s'){
        for(i=1; i<=lado; i++){
            printf("\nDigite o valor do lado %d :\n",i);
            scanf("%f",&l);
            l+=l;  }
        printf("\n\nO perimetro da figura indicada e de: %.2f\n\n",l);
    }
    else{
    printf("\n\nQual o valor de cada lado ou do raio: ");
    scanf("%f",&valorLado);
    if (lado==0){
        float r = (valorLado*2)*3.14;
        printf("\n\nValor do perimetro do circulo: %.2f\n\n",r);
    }
    else {
        int p =lado*valorLado;
        printf("\n\nO perimetro da figura indicada e de: %d\n\n",p);
    }
}
}

#endif // PERIMETRO_H_INCLUDED
