/* Faça um programa que leia a velocidade máxima permitida
em uma avenida e a velocidade que um motorista estava
dirigindo nela e calcule a multa que ele terá que pagar,
sabendo que são pagos: R$50 se o motorista ultrapassar até
10km/h a velocidade permitida (ex: se a velocidade máxima
permitida for 50km/h e ele estiver a 53 ou 60km/h); R$100 se
o motorista ultrapassar de 11 a 30hm/h a velocidade
permitida; e R$ 200 se ele estiver acima de 30km/h da
velocidade permitida.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vp,vm,m;
	printf("\nDigite a velocidade permitida da avenida:\n");
	scanf("%i",&vp);
	printf("\nDigite a velocidade que o motorista estava:\n");
	scanf("%i",&vm);
	m=vm-vp;
	if (vp>=vm){
		printf("\nESTA NO LIMITE. SEM MULTAS\n");
	}else if(vp<vm){
		if (m<=10){
			printf("\nO MOTORISTA ESTAVA COM %i KM/H A MAIS DO PERMITIDO.\nFOI MULTADO NO VALOR DE 50 REAIS\n",m);
		}else if(m>10 and m<=30){
			printf("\nO MOTORISTA ESTAVA COM %i KM/H A MAIS DO PERMITIDO.\nFOI MULTADO NO VALOR DE 100 REAIS\n",m);
		}else if(m>30){
			printf("\nO MOTORISTA ESTAVA COM %i KM/H A MAIS DO PERMITIDO.\nFOI MULTADO NO VALOR DE 200 REAIS\n",m);
		}
	}
	system("pause");
	return 0;
}
