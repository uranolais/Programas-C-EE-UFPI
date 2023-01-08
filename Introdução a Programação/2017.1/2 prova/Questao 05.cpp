/* SEUS PUTO esse programa ta todo bonitnho, entao nao copia igual Calouro burro da porra

   ESSE PROGRAMA VAI CAIR NA SUA PROVA */
   
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

	system("color 5F");

	setlocale(LC_ALL, "Portuguese");

	int opcao;
	float saldo = 1000, saque, trans, dep;

	while(opcao != 5)
	{
		printf ("\nEscolha uma das opções:\n1 - Saldo\n2 - Saque\n3 - Transferencia\n4 - Deposito\n5 - Sair\n\n");
		scanf ("%i", &opcao);
		switch(opcao)
		{
		case 1:
			printf ("\nSeu saldo é %.2f\n", saldo);
			break;
		case 2:
			printf ("\nDigite o valor da quantia a ser sacada: ");
			scanf ("%f", &saque);
			saldo = saldo - saque;
			printf ("\nSeu novo saldo é %.2f\n", saldo);
			break;
		case 3:
			printf ("\nDigite o valor a ser transferido: ");
			scanf ("\n%f", &trans);
			saldo = saldo - trans;
			printf ("\nSeu novo saldo é %.2f\n", saldo);
			break;
		case 4:
			printf ("\nDigite o valor a ser depositado: ");
			scanf ("\n%f", &dep);
			saldo = saldo + dep;
			printf ("\nSeu novo saldo é %.2f\n", saldo);
			break;
		case 5:
			printf ("\nSeção finalizada.\n");
			break;
		default:
			printf ("\nOpção inválida.\n");
		}
	}
	return 0;
}
