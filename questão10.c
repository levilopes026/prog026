#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{

    char tipo[4];
    char *x;

    x=&tipo;

    printf("%d %d %d \n",x+1,x+2,x+3);

    int tipo1[4];
    int *y;

    x=&tipo1;

    printf("%d %d %d \n",y+1,y+2,y+3);

    float tipo2[4];
    float *z;

    x=&tipo2;

    printf("%d %d %d \n",z+1,z+2,z+3);



    double tipo3[4];
    double *w;

    x=&tipo3;

    printf("%d %d %d \n",w+1,w+2,w+3);




//como char fica sendo:6422037 6422038 6422039  1 em 1 byte
//como int fica sendo:6422020 6422024 6422028   era para ser 4 em 4 bytes!!!!
//como float fica sendo:6422020 6422024 6422028 4 em 4 bytes
//como double fica sendo:6422008 6422016 6422024 8 em 8 bytes


}
