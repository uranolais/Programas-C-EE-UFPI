/*Fa�a um programa que leia a velocidade m�xima permitida
em uma avenida e a velocidade que um motorista estava
dirigindo nela e calcule a multa que ele ter� que pagar,
sabendo que s�o pagos: R$50 se o motorista ultrapassar at�
10km/h a velocidade permitida (ex: se a velocidade m�xima
permitida for 50km/h e ele estiver a 53 ou 60km/h); R$100 se
o motorista ultrapassar de 11 a 30hm/h a velocidade
permitida; e R$ 200 se ele estiver acima de 30km/h da
velocidade permitida.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vp,vm,sub;
	printf("Digite a velocidade maxima permitida da avenida:");
	scanf("%i",&vp);
	printf("Digite a velocidade do motorista:");
	scanf("%i",&vm);
	if (vm<=vp){
		printf("Voce esta' no limite de velocidade permitida \n");
	}else if(vm>vp){
		sub=vm-vp;
		if (sub<=10){
			printf("Voc� excedeu %i km/h da velocidade permitida, sua multa � de 50 reais!",sub);
		}else if (sub>10 and sub<=30){
			printf("Voc� excedeu %i km/h da velocidade permitida, sua multa � de 100 reais!",sub);
		}else
			printf("Voc� excedeu %i km/h da velocidade permitida, sua multa � de 200 reais!",sub);
	}
	system("pause");
	return 0;
}
