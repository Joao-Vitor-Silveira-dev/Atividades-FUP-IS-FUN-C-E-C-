#include <stdio.h>
#include <math.h>
    int main(){
        float x1,x2,y1,y2,dab;
            scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
                dab=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
            printf("%.2f\n",dab);
return (0);}
//CODE BY JVS

/*Distância entre dois pontos
_
_
Contexto

Um atirador de elite estava atirando a 400 metros de distância em um papel milimetrado. Para calcular a imprecisão da arma, ele dava dois tiros e media a distância entre eles. Como ele não tinha uma régua, ele pegou as coordenadas dos pontos no plano cartesiano e usou a fórmula da distância entre dois pontos.

dAB=(x₂−x₁)2+(y₂−y₁)2−−−−−−−−−−−−−−−−−−−√

Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto, imprima a distância entre os pontos com duas casas decimais.
Entrada

    Coordenada X e coordenada Y do primeiro ponto.
    Coordenada X e coordenada Y do segundo ponto.

Saída

    A distância entre os pontos com duas casas decimais.

Testes

>>>>>>>> INSERT 01
3
7
1
4
======== EXPECT
3.61
<<<<<<<< FINISH

>>>>>>>> INSERT 02
1
8.2
-4
12
======== EXPECT
6.28
<<<<<<<< FINISH

>>>>>>>> INSERT 03
3
1
3
5
======== EXPECT
4.00
<<<<<<<< FINISH*/