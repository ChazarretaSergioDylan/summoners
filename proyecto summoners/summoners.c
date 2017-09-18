#include <stdio.h>
#include <stdlib.h>
#include "summoners.h"
#include <string.h>
#include <ctype.h>
#include <conio.h>
int miMenu (char mensaje[])
{
    int opcion;
    printf("%s\nSeleccione una opcion:",mensaje);
    scanf("%d",&opcion);
    return opcion;
}
