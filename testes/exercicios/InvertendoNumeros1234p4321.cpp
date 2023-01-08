/*Escreva um programa que inverta as cifras de um número INTEIRO POSITIVO digitado pelo usuário.
 Exemplo: Se o usuário digitar 1234 o programa deve retornar na tela 4321.*/
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
int main()
{
	int num; 
	int cifra;
	printf("Digite um numero inteiro:");
	scanf("%d",&num);
	if (num>=0){
		do 
		{
			cifra = num % 10; //a sobra desse numero e' a cifra. Tipo 123 = 12,3 entao a cifra e' 3
			printf("%d",cifra);
			num = num / 10; // numero = numero/10 (como nao é float, vai ignorar a virgula)
		}while(num != 0); //o programa vai fazer isso enquanto o numero for diferente de 0
		printf("\n"); //vai parar pq o valor vai ser zero 
	}
	else if (num<1){
		num = num * -1; //transformando ele em positivo
		printf("-"); //jogando o sinal de negativo na frente
		do{
			cifra = num % 10; //a sobra desse numero e' a cifra. Tipo 123 = 12,3 entao a cifra e' 3
			printf("%d",cifra);
			num /= 10; // numero = numero/10 (como nao é float, vai ignorar a virgula)
		} while(num != 0); //o programa vai fazer isso enquanto o numero for diferente de 0
		printf("\n"); //vai parar pq o valor vai ser zero 
	}
	
	system("pause");
	return 0;
}
