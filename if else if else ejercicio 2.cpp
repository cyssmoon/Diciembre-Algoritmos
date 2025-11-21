//el q es mayor de edad pasa y el q no chau
#include <stdio.h>
int edad;
main(){
	printf("Ingrese su edad:");
	scanf("%d",&edad);
	if(edad <= 18){
		printf("Es mayor de edad");
	}
	else{
		printf("No es mayor de edad");
	}
}
