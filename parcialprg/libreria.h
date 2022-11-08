#ifndef LIBRERIA_H_INCLUDED
#define LIBRERIA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


typedef struct visita{
char fecha[10];
float peso;
}tvisita;

typedef struct paciente{
char Nombre[40];
int nro,edad;
tvisita visitas[6];

}tpaciente;

void completar(tpaciente pacientes[])
{
//printf("Se llamo a la funcion completar");
int j;
int i;
printf("-----------------------------------\n\a");
for (i=0;i<2;i++){

                  printf("Ingrese el numero del paciente\n");
                  scanf("%d",&pacientes[i].nro);

                  printf("Ingrese el Nombre del paciente\n");
                  scanf("%s",&pacientes[i].Nombre);

                  printf("Ingrese la edad del paciente\n");
                  scanf("%d",&pacientes[i].edad);


                  printf("-----------------------------------\n");
             //     for(j=0;j<3;j++)
                          //       {
                             //    printf("Ingrese fecha de visita [%d] \n",j+1);
                              //   scanf("%s",&pacientes[i].visitas[j].fecha);
                              //   printf("Ingrese peso registrado en kilogramos\n");
                              //   scanf("%f",&pacientes[i].visitas[j].peso);
                             //    }
                             //    printf("-----------------------------------\n");
                             //    system("cls");

            //     }

}

void mostrar(tpaciente pacientes[])
{

system("cls");
int h;
printf("-----------------------------------\n\a");
printf("Datos del paciente  ");



}
#endif // LIBRERIA_H_INCLUDED
