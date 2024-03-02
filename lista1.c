#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
int main (){
    char nome;
    printf("%s", Nome)
return 0;
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02 (){
    int x;
    x = 30*27;
    printf("%d\n", x);
return 0;

}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03(){
    int num1 = 5;
    int num1 = 8;
    int num1 = 12;
    float media = ( 5+8+12)/3.0;
    printf(" media de %d %d %d %d = %.2f \n", num1, num2, num3, media);
return 0;
}

//4. Faça um programa que leia e imprima um número inteiro.
void q04(){
    int n;
    printf(" Digite um numero inteirto:\n");
    scanf("%d", &n);

    prinf(" O numero inteiro é: %d\n",n);
return 0;

}

//5. Faça um programa que leia dois números reais e os imprima.
void q05(){
    float n1;
    float n2;
    printf(" Digite dois numeros reais:\n");
    scanf("%f %f", &n1,&n2);

    prinf(" O numeros reais são: %f %f\n",n1,n2);
return 0;
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06(){
int I;
int I0;
int I1;
 printf(" Digite um numero inteiro:\n");
    scanf("%d %d %d", &I, I0, I1);
    I0 = I--
    I1 = I++

     prinf(" O numero inteiro é : %d \n",I);
     prinf(" Seu antecessor é : %d \n",I0);
     prinf(" Seu sucessor é : %d \n",I1);
return 0;
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07(){
char [50] nome;
char [100]end;
char [20] tel;
 printf(" Digite seu nome:\n");
 printf(" Digite seu endereço:\n");
 printf(" Digite seu telefone:\n");
    scanf(" %50[^\n]" %s",&nome &end, &tel);

     printf(" Digite seu nome: %s\n seu endereço: %s \n", e seu telefone:%s\n");
return 0;
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08(){
int n1;
int n2;
 printf(" Digite o primeiro numero inteiro:\n");
    scanf("%d", &n1 );
printf(" Digite o segundo numero inteiro:\n");
    scanf("%d", &n2 );

     prinf(" a subtração dos numeros inteiros é : %d \n",n1-n2);
return 0;

}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
    void q09(){
float nr;
    printf(" digite um numero real:\n");
    scanf("%f" , &nr);
    printf("  ¼ do numero real é: %f \n", nr/4)
return 0;
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10 (){
float n1;
float n2;
float n3;
float media;
    printf(" digite o primeiro numero real:\n");
    scanf("%f" , &n1);
    printf(" digite o segundo numero real:\n");
    scanf("%f" , &n2);
    printf(" digite o terceiro numero real:\n");
    scanf("%f" , &n3);

    media = (n1+n2+n3)/3;

    printf(" A media aritmetica dos tres numeros reais são: %.2f,%.2f,%.2f \n",n1,n2,n3, media);
return 0;
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11(){
float n1;
float n2;
float adição;
float subt;
float mult;
float div;
printf(" digite o primeiro numero real:\n);
    scanf("%f" , &n1);
printf(" digite o segundo numero real:\n);
    scanf("%f" , &n2);

    adição = n1+n2;
    subt = n1 - n2;
    mult = n1*n2;
    div = n1/n2;

    printf(" O calculo das operações são: %f %f %f %f\n", adição, subt, mult, div);
return 0;
}
//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12 (){
int n1;
float calculo;
printf(" digite um numero real:\n");
    scanf("%f" , &n1);

    calculo = n1*n1;

    printf(" O quadrado do numero real é: %f\n", calculo);
return 0;
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13(){
float saldo;

    printf("Digite seu saldo:\n");
    scanf("%f", &saldo);

    saldo = saldo*1.02;

    printf("O saldo reajustado é: %.2f \n" , saldo);
return 0;
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void q14(){
float base;
float altura;

 printf("Digite a base do retangulo:\n");
    scanf("%f", &base);
printf("Digite a altura do retangulo:\n");
    scanf("%f", &altura);

printf("O perimetro da base + altura é: %f \n" , base + altura);
printf("O perimetro da base x altura é: %f \n" , base * altura);

return 0;
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15(){
    float produto;
    float percent;
    float desc;

printf("Digite o valor do produto:\n");
    scanf("%f", &produto);
printf("Digite o percentual do desconto desejado:\n");
    scanf("%f", &desc);

printf("O valor do desconto é: %f \n", desc );
printf("O valor do produto com o desconto é: %.2f \n",produto - desc);

return 0;

}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16(){
    float salarioA
    float novoS
    float percent

printf("Digite o salario:\n");
    scanf("%f", &salarioA);
printf("Digite o percentual de reajuste:\n");
    scanf("%f", &percent);

    novoS = salarioA + percent

    printf("O novo salário do funcionário é: %f \n", novoS );

return 0;

}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17(){
    float grauC
    float grausF
printf("Digite o Grau C:\n");
    scanf("%f", &grauC);

   grauF = ( 9 * grauC + 160) / 5

   printf("a conversão entre graus centígrados e Fahrenheit é: %f \n", grauF );

return 0;
}

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void q18(){
    float 
    float 

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main (){
    q14();
    return 0;
}