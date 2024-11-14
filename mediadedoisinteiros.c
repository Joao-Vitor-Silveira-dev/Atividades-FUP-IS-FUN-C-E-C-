#include <stdio.h>
    int main(){
        float numero1,numero2;//CRIACAO DE 2 VAR FLOAT
            scanf("%f%f",&numero1,&numero2);// LEITURA 2 NUMEROS
                printf("%.1f\n",(numero1+numero2)/2);//IMPRIME MEDIA
//CODE BY JVS_MAD_HATTER *_*
return(0);}
/*@media: Média de dois inteiros
Número máximo de arquivos: 3
Tipo de trabalho: Trabalho individual
Média de dois inteiros
Imagem Média de Dois Inteiros
Imagem Média de Dois Inteiros
Contexto

Escreva um programa que recebe dois números inteiros e retorna a média aritmética deles.
Entrada

    A entrada consiste em duas linhas. Cada linha contém um número inteiro.

Saída

    A saída deve conter a média aritmética dos dois números com uma casa decimal.

Testes

>>>>>>>> INSERT t1
2
4
======== EXPECT
3.0
<<<<<<<< FINISH

>>>>>>>> INSERT t2
34
21
======== EXPECT
27.5
<<<<<<<< FINISH

>>>>>>>> INSERT t3
-15
234
======== EXPECT
109.5
<<<<<<<< FINISH

>>>>>>>> INSERT t4
12
4
======== EXPECT
8.0
<<<<<<<< FINISH

>>>>>>>> INSERT t5
-13
-14
======== EXPECT
-13.5
<<<<<<<< FINISH

Dicas
Programando em: C

    Para exibir um número de ponto flutuante do tipo float com apenas uma casa decimal em C, use o especificador de formato %.1f na função printf. O número 1 após o ponto indica o número de casas decimais a serem exibidas.

int main() {
    printf("%.1f\n", resultado);
}

Programando em: Python

    Para exibir um número de ponto flutuante com apenas uma casa decimal em Python, use o formato :.1f na função print. O número 1 após o ponto indica o número de casas decimais que serão exibidas:

print(f"{resultado:.1f}")
- ou -
print("{:.1f}".format(resultado))

Programando em: TypeScript

    Para exibir um número com apenas uma casa decimal em TypeScript, use o método toFixed(1). O número 1 indica o número de casas decimais que serão exibidas.

console.log(resultado.toFixed(1)); 

console.log(resultado.toFixed(1)); 
write(resultado.toFixed(1));

*/
