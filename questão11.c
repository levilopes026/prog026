#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{


    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2]=value;          // esse comando � v�lido
    printf("%f\n",aloha[2]);


    scanf("%f",&aloha);// comando v�lido



// aloha=value;  comando inv�lido


    printf("%f",aloha);// comando v�lido



    coisas[4][4]=aloha[3]; // comando v�lido


//coisas[5]=aloha;  comando inv�lido


//pf=value;   comando inv�lido


    pf=aloha; // comando v�lido
}
