#include <stdio.h>
#include <stdlib.h>

float calculoInflacao(float preco, int porcentagem){
	float result = (preco * porcentagem) / 100;
	return result;
}


int main(){

float preco;
float result;

printf("Bem vindo ao calculador de inflação do teteu!\n");
printf("Por favor digite o preço que deseja obter\n");

scanf("%e", &preco);

printf("%e",preco);

if(preco <= 100){
	result = (preco * 10) / 100;
	printf("O valor original do item é: %e\n", preco);
	printf("O valor da inflação é: %e\n", result);
} else {
	result = calculoInflacao(preco, 20);
	printf("O valor original do item é: %e\n", preco);
	printf("O valor da inflação é: %e\n", result);
}

return 0;
}
