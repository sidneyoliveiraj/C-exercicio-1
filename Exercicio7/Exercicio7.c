/*
7.	Construa um programa que converta metros para centÃ­metros.
R.:
*/

int main(void){
    //Variaveis
    float m, cm;

    //Entradas de dados
    printf("Digite o valor em metros: ");
	scanf("%f",&m);
	fflush(stdin);

    //Processamento de dados 
    cm=m*100;

    //Saida de dados
    printf("O valor em centimetros e %f\n",cm); 

    return 0;
}