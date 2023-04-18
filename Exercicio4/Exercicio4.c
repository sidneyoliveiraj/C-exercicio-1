/*
4. Construa um algoritmo que peça uma temperatura em graus Celsius (ºC), 
transforme e mostre na tela a temperatura em graus Fahrenheit (ºF).
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
   float C, F;

//Entrada de dados 
printf("Digite o valor em Celsius: ");
scanf("%f",&C);
fflush(stdin);

//Processamento de dados 
// C=5*(F-32)/9; => C*9/5 = F-32 => F = C*9/5+32
F=C*9/5+32;

//Saida de dados 
printf("O valor em fahrenheit e %.2f\n",F);

return 0;

}