/*Faça um programa que leia a velocidade máxima permitida
em uma avenida e a velocidade que um motorista estava
dirigindo nela e calcule a multa que ele terá que pagar,
sabendo que são pagos: R$50 se o motorista ultrapassar até
10km/h a velocidade permitida (ex: se a velocidade máxima
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
	
	printf("Digite a velocidade máxima permitida:\n");
	scanf("%i", &velmax);
    printf("Digite a velocidade que estava o motorista:\n");
	scanf("%i", &velmoto);
	
	vel10 = velmax+10;
	vel11 = velmax+11;
	vel30 = velmax+30;
	
	if (velmoto<velmax) {	
		printf("O motorista é uma tartaruga ou ciente");
	}
	if (velmoto==velmax) {	
		printf("O motorista esta na velocidade maxima eprmitida");
	}
if (velmoto > velmax) {	

if (velmoto <= vel10){
printf ("A multa é de R$50,00");
}

if (velmoto >= vel11 && velmoto <=vel30){
printf ("A multa é de R$100,00");
}

if (velmoto > vel30){
printf ("A multa é de R$200,00");
}

}
}


 	