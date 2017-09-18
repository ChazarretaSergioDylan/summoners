#include <stdio.h>
#include <stdlib.h>
#include "summoners.h"
#include <string.h>
#define tam 10
int main()
{
    eMob monstruos[tam];
    int i,seleccion;
    char seguir='s';
    for (i=0; i<tam; i++)
    {
        strcpy(monstruos[i].descripcion, "sin descripcion");
        monstruos[i].estado=0;

    }
    do
    {
        seleccion=miMenu("\n1.Crear nuevo Mob.\n2.Editar Mob.\n3.Salir.\n");
        switch(seleccion)
        {
        case 1:
            printf("\nIngresado a opcion 1.\n");
            break;
        case 2:
            printf("\nIngresado a opcion 2.\n");
            break;
        case 3:
            printf("\nHasta luego!");
            seguir='n';
            break;
        }

    }while(seguir=='s');


        return 0;
}
