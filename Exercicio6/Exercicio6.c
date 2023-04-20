/*
Construa um programa que calcule 
a area de um circulo.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void){
//variaveis
float raio, area;

//Entrada de dados 
printf("Digite o valor do raio: ");
scanf("%f",&raio);
fflush(stdin);

//Qual o processamento de dados 
area=M_PI*pow(raio,2);

//Saida de dados 
printf("A area e: %f\n",area);

 return 0;
}