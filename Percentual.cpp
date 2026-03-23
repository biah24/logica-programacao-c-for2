#include <stdio.h>

int main(){
	float ano;
	printf("salario em 2019: R$1.015,00\n");
	printf("Informe o ano atual: ");
	scanf("%d", &ano);
	float percentual_inicial = 1.5, salarioFinal;
	
	for(int i = 2020; i <=ano; i++){
		for(float f = 1; f >= percentual_inicial; f++){
			f = (f/100)* 2;
			printf("Percentual acumulado de aumento foi igual a: %d\n", f);
			salarioFinal = 1.015 + f;
		}
	printf("Salario em %d foi igual a: %d", i, salarioFinal);
	}
}
