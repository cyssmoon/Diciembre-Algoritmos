//Realizar un programa que lea el precio de una entrada y edad del usuario. Si el usuario es menor de 16 años tiene un 40% de descuento. Informar el descuento y el total a pagar
#include <stdio.h>
float entrada, total;
int edad, desc;
main(){
	printf("Ingresar el precio de la entrada: ");
	scanf("%f",&entrada);
	printf("Ingresar edad: ");
	scanf("%d",&edad);
	
	if(edad < 16){
		total = entrada * desc;
		printf("Precio a pagar: %f\n un 40%% de descuento", total);
	}
	else{
		total = entrada;
		printf("Precio a pagar: %f\n un 0%% de descuento",total);
	}
}
