// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\nAO CLICAR A TECLA ""C"" VOCE ACIONARA O SISTEMA DE IGNIÇÃO DO VEICULO\n\n");
	printf("\n\nTEMPO DE RESPOSTA DO VEICULO + TEMPO DE RACIOCINIO DO CONDUTOR = 5 SEGUNDOS\n\n");

	for(a=0;a<=90;a+=1){
		
		if (a<20){
			system("color 4F");
			
		}
		else if (a<40){
			system("color 6F");
		}
		else if (a<70){
			system("color 2F");
		}	
		
	}

	return 0;
}

