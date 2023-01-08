#include <stdio.h>
int main()
{
int n, i=1, cont=0;
float media;
printf("Digite a quantidade de alunos na sala:\n");
scanf("%d",&n);
while (i<=n)
	{
	i++;
	printf("Digite a media do aluno\n");
	scanf("%f",&media);
	if (media<0 || media >10)
		{
		do {
			printf("informe uma media valida\n");
			scanf("%f",&media);
			if (media>7 && media<=10)
			cont++;
			}
		while(media<0 || media >10);
		}
	else if (media>7 && media<=10)
	cont++;
	}
printf("Quantidade de alunos com media superior a 7 = %d", cont);
	return 0;
}