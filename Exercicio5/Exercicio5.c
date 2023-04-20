/*
5. Construa um algoritmo que peça 2 números inteiros e um número real. 
Calcule e mostre:
a. o produto do dobro do primeiro mais metade do segundo .
b. a soma do triplo do primeiro mais o terceiro.
c. o terceiro elevado ao cubo.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	// Quais sÃ£o as variÃ¡veis?
	int n1,n2;
	float n3;
	
	//Quais sÃ£o as entradas de dados?
	printf("Digite o numero 1: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("Digite o numero 2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	printf("Digite o numero 3: ");
	scanf("%f",&n3);
	fflush(stdin);
	
	//processamento
	// a. o produto do dobro do primeiro mais metade do segundo
	float a = n1 * 2 + (float)n2/2;
	
	//b.a soma do triplo do primeiro com o terceiro.
	float b = n1*3+n3;
	
	//c. o terceiro elevado ao cubo.
	float c = pow(n3,3);
	
	//SaÃ­da
	printf("A = %f\n",a);
	printf("B = %f\n",b);
	printf("C = %f\n",c);
	
	return 0;
}
