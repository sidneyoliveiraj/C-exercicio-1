/*
3. Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF), 
transforme e mostre na tela a temperatura em graus Celsius (ºC). C=5*(F-32)/9
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
    float C, F;

//Entrada de dados 
printf("Difgite o valor em Fahrenheit: ");
scanf("%f",&F);
fflush(stdin);

//Qual é o processamento de dados ?
C=5*(F-32)/9;

//Saida de dados 
printf("O valor em celcius e %f\n",C);

  return 0;
}