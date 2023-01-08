/*5)  Criar  um  programa  que  calcule  a  dosagem  de  um  remédio  a  partir  da  idade  e  peso  do 
paciente. O programa deve informar quantas gotas o paciente deve tomar por dose. Considere 
que o medicamento em questão possui 500 mg por ml, e que cada ml corresponde a 20 gotas.  
?  A partir de 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos devem tomar 
1000 mg; com peso abaixo de 60 quilos devem tomar 875 mg.  
?  Para menores de 12 anos a dosagem é calculada pelo peso corpóreo conforme a tabela 
a seguir: 
5kg a 9kg  125mg 
>9kg a 16kg  250mg 
>16kg a 24kg  375mg 
>24kg a 30kg  500mg 
>30kg  750mg 
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	float dosagem,idade,peso;
	printf("\n\n*=*=*=*=*=*=*=*=*=* MEDICAÇÃO DO PACIENTE *=*=*=*=*=*=*=*=*=*\n\n");
	printf("\nDigite a idade do paciente: ");
	scanf("%f",&idade);
	printf("\nDigite o peso do paciente: ");
	scanf("%f",&peso);
	if (idade>=12){
		if (peso>=60){
			dosagem=(1000*20)/500;
			printf("\nA dosagem em gotas de medicamento é: %.2f gotas",dosagem);
		}else if(peso<60 && peso>0){
			dosagem=(875*20)/500;
			printf("\nA dosagem em gotas de medicamento é: %.2f gotas",dosagem);
		}else{
			printf("\nSITUAÇÃO DESCONHECIDA\n");
		}
	}else if(idade<12 && idade>0){
		if (peso>=5 && peso<9){
			dosagem=(125*20)/500;
			printf("\nA dosagem em gotas de medicamento é: %.2f gotas",dosagem);
		}else if(peso>=9 && peso<16){
			dosagem=(250*20)/500;
			printf("\nA dosagem em gotas de medicamento é: %.2f gotas",dosagem);
		}else if(peso>=16 && peso<24){
			dosagem=(375*20)/500;
			printf("\nA dosagem em gotas de medicamento é: %.2f gotas",dosagem);
		}else if(peso>=24 && peso<30){
			dosagem=(500*20)/500;
			printf("\nA dosagem em gotas de medicamento é: %.2f gotas",dosagem);
		}else if(peso>=30){
			dosagem=(750*20)/500;
			printf("\nA dosagem em gotas de medicamento é: %.2f gotas",dosagem);
		}else{
			printf("\nSITUAÇÃO DESCONHECIDA\n");
		}
	}else{
		printf("\nSITUAÇÃO DESCONHECIDA\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
