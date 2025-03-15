#include <stdio.h>
#include <math.h>
    int main(){
        float numero1, numero2, numero3,areat,p;
            scanf ("%f%f%f",&numero1,&numero2,&numero3);
                p=(numero1+numero2+numero3)/2;
                areat=sqrt(p*(p-numero1)*(p-numero2)*(p-numero3));
            printf("%.2f\n",areat);
return (0);}
//CODE BY JVS
/*
Pintando a casa
_
_
Contexto

Fernando comprou uma casa triangular. Ao tentar calcular a quantidade de tinta necessária para pintar as paredes, ele percebeu que precisava saber como calcular a área de um triângulo. Felizmente, ele encontrou a Fórmula de Heron, que permite calcular a área de um triângulo a partir do tamanho de seus lados.

Implemente um programa que, dado o tamanho dos três lados de um triângulo, calcule a área utilizando a Fórmula de Heron:

formula​
Entrada

    Três números em ponto flutuante representando os lados do triângulo, um por linha.

Saída

    A área do triângulo com duas casas decimais.

Testes

>>>>>>>> INSERT
4
3
5
======== EXPECT
6.00
<<<<<<<< FINISH

>>>>>>>> INSERT
10
12
16
======== EXPECT
59.92
<<<<<<<< FINISH

 */