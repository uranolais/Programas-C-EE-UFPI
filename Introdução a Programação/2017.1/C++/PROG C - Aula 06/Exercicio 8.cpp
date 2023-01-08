/*Faça um programa que leia a categoria da carteira de motorista do usuário e
imprima os tipos de veículos que ele pode dirigir.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	char cart;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a categoria da sua carteira de motorista:\n");
	scanf("%c", &cart);
	
	switch(cart){
		case 'a':
			printf("\nPode dirigir:\nMotocicleta, Ciclomotor, Motoneta ou Triciclo.\n");
			break;
		case 'b': 
			printf("\nPode dirigir:\nAutomóvel, caminhonete, camioneta, utilitário.\n");
			break;
		case 'c':
			printf("\nPode dirigir:\nTodos os veículos abrangidos pela categoria B e Caminhão.\n");
			break;
		case 'd': 
			printf("\nPode dirigir:\nTodos os veículos abrangidos pela categoria C e Microônibus, Ônibus.\n");
			break;
		case 'e':
			printf("\nPode dirigir:\nTodos os veículos abrangidos pela categoria D e Veículo com dois reboques acoplados.\n");
			break;
		default:
			printf("\nOPÇÃO INVÁLIDA\n");
			break;
	}
	
	return 0;
}