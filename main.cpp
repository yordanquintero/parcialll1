#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int pmy;
int pm;
int pmd;
int menor=999999;
int n;
int mediano;

char nuevo[100];

struct ejercicio{

char nombre[100];
int edad;


}persona[3], *ppersona=persona;


int main(){

int mayor=0;

    for(int i=0;i<3;i++){

            fflush(stdin);
    printf("ingrese el nombre: ");
    fgets((ppersona+i)->nombre,30,stdin);
    printf("ingrese la edad: ");
    scanf("%d",&(ppersona+i)->edad);
    }
for(int i=0;i<3;i++){
    if(mayor<(ppersona+i)->edad){
            pmy=i;
        mayor=(ppersona+i)->edad;
    }
}
printf("---------------\n");
printf("el mayor es: \n");
printf("---------------\n");
printf("nombre: %s",(ppersona+pmy)->nombre);
printf("edad: %d\n",mayor);
printf("---------------\n");



for(int i=0;i<3;i++){
    if(menor>(ppersona+i)->edad){
            pm=i;
        menor=(ppersona+i)->edad;
    }
}
printf("---------------\n");
printf("el menor es: \n");
printf("---------------\n");
printf("nombre: %s",(ppersona+pm)->nombre);
printf("edad: %d\n",menor);
printf("---------------\n");




for(int i=0;i<3;i++){
    if(mediano>(ppersona+pm)->edad&&mediano<(ppersona+pmy)->edad){
            pmd=i;
        mediano=(ppersona+i)->edad;
    }
}


printf("---------------\n");
printf("el mediano es: \n");
printf("---------------\n");
printf("nombre: %s",(ppersona+pmd)->nombre);
printf("edad: %d\n",mediano);
printf("---------------\n");



    return 0;
}
