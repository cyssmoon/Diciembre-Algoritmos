#include <stdio.h>
int edad, trans, i, N=2, cont_trans=0, acum=0, cont=0, edad_min, min_trans, cont_menores, cont_si;
int porc_trans_men;
float porc_trans, prom;
int main()
{
    for (i=0; i<N; i++){
        printf ("Ingrese edad: ");
        scanf ("%d", &edad);
        printf ("Hace transbordo? 1 - SI 0 - NO ");
        scanf ("%d", &trans);
        //1- Que porcentaje hace transbordo
        if (trans == 1){
            cont_trans= cont_trans+1;
        }
        //2- Edad minima y si hace transbordo o NO
        if (i==0 || edad < edad_min){
            edad_min=edad;
            min_trans=trans;
        }
        //3- Promedio de edades entre los mayores a 50 años que no hacen transbordo
        if(edad > 50){
            if (trans == 0){
            acum=acum+edad; //suma
            cont=cont+1; //cantidad
            }
        }
        //4- Entre los menores de edad, cuantos hacen transbordo. Porcentaje.
        if (edad < 18){
            cont_menores=cont_menores+1;
            if (trans == 1){
                cont_si=cont_si+1;
            }
        }
        
    }
    porc_trans=cont_trans*100/N;
    printf("El porcentaje de los que hacen transbordo es %f", porc_trans);
    printf("La edad minima es %d y transbordo es %d", edad_min, min_trans);
    porc_trans_men=cont_si*100/cont_menores;
    printf("El porcentaje entre los menores que hacen transbordo es %d", porc_trans_men);
   if (cont!=0){
   prom=acum/cont;
    printf("El promedio de edades entre los mayores a 50 que no hacen transbordo es  %f", prom);}
    return 0;
}
