/*Fa�a um programa que leia a categoria da carteira de motorista do usu�rio e
imprima os tipos de ve�culos que ele pode dirigir.*/
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
			printf("\nPode dirigir:\nAutom�vel, caminhonete, camioneta, utilit�rio.\n");
			break;
		case 'c':
			printf("\nPode dirigir:\nTodos os ve�culos abrangidos pela categoria B e Caminh�o.\n");
			break;
		case 'd': 
			printf("\nPode dirigir:\nTodos os ve�culos abrangidos pela categoria C e Micro�nibus, �nibus.\n");
			break;
		case 'e':
			printf("\nPode dirigir:\nTodos os ve�culos abrangidos pela categoria D e Ve�culo com dois reboques acoplados.\n");
			break;
		default:
			printf("\nOP��O INV�LIDA\n");
			break;
	}
	
	return 0;
}