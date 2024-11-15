#include <stdio.h>
    int main(){
        int segundosi,horas,minutos,segundoso;//Criacao variáveis
        scanf("%d",&segundosi);
        horas=segundosi/3600;
        minutos=(segundosi%3600)/60;
        segundoso=segundosi%60;
        printf("%d:%d:%d\n",horas,minutos,segundoso);
//CODE BY JVS_MAD_HATTER
return(0);}

/*Converter segundos em h:m:s
Imagem Tempo em Horas, Minutos e Segundos
Imagem Tempo em Horas, Minutos e Segundos
Contexto

Em muitas situações do dia a dia, é necessário converter um tempo em segundos para horas e minutos.

Implemente um programa que recebe um tempo em segundos e transformar no formato:

Hora:Minuto:Segundo

    A hora pode ser obtida pela divisão inteira do tempo por 3600.
    Agora pegue o resto de tempo por 3600, isso é o que sobrou pra minutos e segundos.
    A quantidade de minutos é obtida pela divisão inteira do resto por 60.
    O resto da divisão por 60 é a quantidade de segundos.

Entrada

    Um único número inteiro representando o tempo em segundos.

Saída

    Tempo formatado em Horas:Minutos:Segundos

Testes

>>>>>>>> INSERT 0
3641
======== EXPECT
1:0:41
<<<<<<<< FINISH

>>>>>>>> INSERT 1
22067
======== EXPECT
6:7:47
<<<<<<<< FINISH

>>>>>>>> INSERT 2
9934
======== EXPECT
2:45:34
<<<<<<<< FINISH

>>>>>>>> INSERT 3
30100
======== EXPECT
8:21:40
<<<<<<<< FINISH

>>>>>>>> INSERT 4
22769
======== EXPECT
6:19:29
<<<<<<<< FINISH

>>>>>>>> INSERT 5
19324
======== EXPECT
5:22:4
<<<<<<<< FINISH

>>>>>>>> INSERT 6
15078
======== EXPECT
4:11:18
<<<<<<<< FINISH

>>>>>>>> INSERT 7
32958
======== EXPECT
9:9:18
<<<<<<<< FINISH

>>>>>>>> INSERT 8
30562
======== EXPECT
8:29:22
<<<<<<<< FINISH

>>>>>>>> INSERT 9
28064
======== EXPECT
7:47:44
<<<<<<<< FINISH

>>>>>>>> INSERT 10
9305
======== EXPECT
2:35:5
<<<<<<<< FINISH

>>>>>>>> INSERT 11
31745
======== EXPECT
8:49:5
<<<<<<<< FINISH

>>>>>>>> INSERT 12
26881
======== EXPECT
7:28:1
<<<<<<<< FINISH

>>>>>>>> INSERT 13
20427
======== EXPECT
5:40:27
<<<<<<<< FINISH

>>>>>>>> INSERT 14
13561
======== EXPECT
3:46:1
<<<<<<<< FINISH

Dicas
Programando em: C

    Aqui está uma menira de realizar impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere : como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:

int main() {
    printf("%d:%d:%d", hora, minuto, segundo)
}

Programando em: Python

    Aqui estão duas maneiras de realizar a impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere : como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:

print(f"{hora}:{minuto}:{segundos}")

print("{}:{}:{}".format(hora, minuto, segundos))

Programando em: TypeScript

    Aqui estão duas maneiras de realizar a impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere : como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:

console.log(hora + ":" + minuto + ":" + segundo);

write(hora + ":" + minuto + ":" + segundo);

console.log(`${hora}:${minuto}:${segundo}`);

write(`${hora}:${minuto}:${segundo}`);*/