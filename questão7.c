#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{

    int mat[4],*p,x;

    p=mat+1;//da certo,pois mostra o endere�o do segundo elemento do vetor

//    p=mat++;//n�o da certo,pois n�o tem como usar essa express�o no vetor
//    p=++mat; n�o da certo,pois n�o tem como usar essa express�o no vetor
    x=(*mat)++;//da certo,pois mostra o segundo elemento do vetor


    printf("%d\n",p);
    printf("%d",x);
}
