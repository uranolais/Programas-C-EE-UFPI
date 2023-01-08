/*Faça um programa que exiba um menu ao usuario com as seguintes opções:
1 - Inclusao
2 - Exclusao
3 - Sair
Ao usuario selecionar uma opçao o programa devera mostrar um texto correspondendo
á opçao selecionada. Mostre "Opção inválida", caso seja diferene de 1, 2 ou 3.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int menu;
	
	setlocale(LC_ALL, "portuguese");
	printf("Selecione uma das opções a seguir:\n1 - Inclusão\n2 - Exclusão\n3 - Sair\n\n");
	scanf("%i", &menu);
	
	
	switch(menu){
		case 1:
			printf("\nINCLUSÃO");
			break;
		
        case 2:
        	printf("\nEXCLUSÃO");
        	break;
        	
   	    case 3:
        	printf("\nSAIR");
        	break;
        
  	    default:
  	    	printf("\nOpcão Invalida");
  	    	break;
  	    	
	}
	return 0;
}