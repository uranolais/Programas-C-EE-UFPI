/*Fa�a um programa que exiba um menu ao usuario com as seguintes op��es:
1 - Inclusao
2 - Exclusao
3 - Sair
Ao usuario selecionar uma op�ao o programa devera mostrar um texto correspondendo
� op�ao selecionada. Mostre "Op��o inv�lida", caso seja diferene de 1, 2 ou 3.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int menu;
	
	setlocale(LC_ALL, "portuguese");
	printf("Selecione uma das op��es a seguir:\n1 - Inclus�o\n2 - Exclus�o\n3 - Sair\n\n");
	scanf("%i", &menu);
	
	
	switch(menu){
		case 1:
			printf("\nINCLUS�O");
			break;
		
        case 2:
        	printf("\nEXCLUS�O");
        	break;
        	
   	    case 3:
        	printf("\nSAIR");
        	break;
        
  	    default:
  	    	printf("\nOpc�o Invalida");
  	    	break;
  	    	
	}
	return 0;
}