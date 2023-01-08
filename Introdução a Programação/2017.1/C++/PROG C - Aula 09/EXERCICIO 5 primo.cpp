/*Escreva um programa que imprima os primos até um número digitado.*/
// Autor(a)    : Jardeanne da Silva Ferreira

# include<stdio.h>
# include<stdlib.h>

int main(int argc, char** argv)
{
	int numero, d, c;

	system("color 5F"); //so mudar a cor merman ignora e n usa isso nos teus programas
	printf("Entre com um numero inteiro e positivo: ");
	scanf("%d", &numero);

	for (d = 1; d <= numero; d++) // fara a soma de +1 ate o numero que tu digitou
	{
		for (c = 2; c <= d ; c++)// verificar os valores que divide os numeros antecessores ate o numero que vc digitou
			if (d % c == 0) break; //analisa para quais valores d é divisivel por c
		if (c == d) printf("\nO numero %d eh primo.\n", d); // so imprime os primos, ou seja, 
		                                                      //como ta dentro do for vai imprimir 
												            	  //sempre que tudo acima for verdade
	}
	return 0;
}
