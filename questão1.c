
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{

    int i=3,j=5,z,w;
    float x;
    float *p,*q;

    p=&i;//pega o endere�o de i
    q=&j;


    printf("teste 1:%d\n",p);

    z=*p-*q;//subtrai o conteudo que est� dentro dos endere�os

    printf("teste 2:%d\n",z);

    w=**&p;//pega o conte�do de p

    printf("teste 3:%d\n",w);

    x=3-*p/(*q)+7;//realiza a conta com os conte�dos de p e q

    printf("teste 4:%f",x);

}

