/*Fa�a um programa que leia a velocidade m�xima permitida
em uma avenida e a velocidade que um motorista estava
dirigindo nela e calcule a multa que ele ter� que pagar,
sabendo que s�o pagos: R$50 se o motorista ultrapassar at�
10km/h a velocidade permitida (ex: se a velocidade m�xima
permitida for 50km/h e ele estiver a 53 ou 60km/h); R$100 se
o motorista ultrapassar de 11 a 30hm/h a velocidade
permitida; e R$ 200 se ele estiver acima de 30km/h da
velocidade permitida.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>



int main(int argc, char** argv)
{
	int velmax, velmoto, vel10, vel11, vel30;
	
	printf("Digite a velocidade m�xima permitida:\n");
	scanf("%i", &velmax);
    printf("Digite a velocidade que estava o motorista:\n");
	scanf("%i", &velmoto);
	
	vel10 = velmax+10;
	vel11 = velmax+11;
	vel30 = velmax+30;
	
	if (velmoto<velmax) {	
		printf("O motorista � uma tartaruga ou ciente");
	}
	if (velmoto==velmax) {	
		printf("O motorista esta na velocidade maxima eprmitida");
	}
if (velmoto > velmax) {	

if (velmoto <= vel10){
printf ("A multa � de R$50,00");
}

if (velmoto >= vel11 && velmoto <=vel30){
printf ("A multa � de R$100,00");
}

if (velmoto > vel30){
printf ("A multa � de R$200,00");
}

}
}


 	