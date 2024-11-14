#include <stdio.h>
    int main(){
int numero1,numero2,numero3; //Aqui crio a variável dos 3 inteiros
    scanf("%d%d%d",&numero1,&numero2,&numero3);// Aqui leio esses números
        printf("%d\n",(numero1+numero2+numero3));// Aqui retorno a soma dos inteiros
//CODE BY JVS_MAD_HATTER *_*
return (0);}

/* QUESTÃO:
Soma de três inteiros
Imagem meteriologica
Imagem meteriologica
Contexto

Você deve escrever um programa que recebe três números inteiros e retorna a soma desses três números.
Entrada

    A entrada consiste de três linhas. Cada linha contém um número inteiro, representando os valores a serem somados.

Saída

    A saída deve conter um único valor: a soma dos três números inteiros, seguido por uma quebra de linha.

Testes

>>>>>>>> INSERT
2
3
4
======== EXPECT
9
<<<<<<<< FINISH

>>>>>>>> INSERT
12
17
24
======== EXPECT
53
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
-4
23
======== EXPECT
9
<<<<<<<< FINISH

Dicas
Programando em: C

    Quebre uma linha usando \n:

int main() {
    printf("%d\n", soma);
}

Programando em: Python

    Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:

print(soma)

Programando em: TypeScript

Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:

console.log(soma); || write();

write(soma);*/