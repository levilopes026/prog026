
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{


    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%d ",*(vet+i));
    }
//1 :c�digo mostra os elementos do vetor


    for(i=0; i<3; i++)
    {
        printf("%X ",vet+i);
    }
//2 :c�digo mostra os endere�os dos elementos do vetor

}


