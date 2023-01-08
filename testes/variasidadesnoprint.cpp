#include <stdio.h>
#include <stdlib.h>
int main()
{
	int minhaIdade;
	minhaIdade=18;
	int idadeA = 20;
	int idadeB=22;
	printf("Minha Idade = %i \nIdade A = %i \nIdade B = %i \n",
	minhaIdade,
	idadeA,
	idadeB);
	int idade;
	idade=minhaIdade+idadeA+idadeB-25;
	float calculo=(minhaIdade*5)/(idadeA+idadeB);
	printf("Idade = %i \n",idade);
	printf("O calculo e'= %f \n",calculo);
	system("pause");
	return 0;
}
