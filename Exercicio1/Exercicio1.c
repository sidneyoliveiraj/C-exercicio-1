/*
01) Fazer um exemplo com : Int, float, char.
*/
#include<stdio.h>
#include<stdlib.h>

//Minhas variaveis
int main(void){
    int idade;
    float peso;
    char sexo;

//Entrada
//[nome variavel] = [conteudo]
idade=24;
peso=99.5;
sexo='M';

//saida
//printf("[texto]",[nome da variavel])
//%i = int
//%f = float
//%c char
printf("idade=%i\n",idade);
printf("Seu peso e %f e seu sexo e %c\n",peso,sexo);

return 0;

}