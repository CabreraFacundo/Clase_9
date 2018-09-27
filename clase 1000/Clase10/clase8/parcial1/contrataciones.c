#include <stdio.h>
#include <stdlib.h>
#include "parcial.h"
#include "utn.h"
#include <string.h>
#include "contrataciones.h"
#define LIMITEP 2
#define LIMITEC 2

static int generarId(void)
{
    static int id = 0;
    id++;
    return id;
}

void con_init_isEmpty(Contrataciones* pContratacion, int limite)
{
    int i=0;

    if(pContratacion!= NULL && i<limite)
    {
        for(i=0; i<limite; i++)
        {
            pContratacion[i].isEmpty = 1;
        }
    }
}


void alta_contrataciones(Contrataciones* pContratacion,Pantalla* pPantalla, int limiteP,int limiteC)
{
    int id;
    int index;

    index = con_getEspacioVacio(pContratacion,limiteC);

    listarPantalla(pPantalla,limiteP);
    id = getInt("\nIngrese el ID de la pantalla donde se quiera publicar: ");

    pContratacion[index].id = generarId();
    pContratacion[index].idPantalla = id;
    pContratacion[index].dias = getInt("\nIngrese la cantidad de dias: ");
    getString("\nIngrese el video: ", pContratacion[index].video);
    getString("\nIngrese el cuit: ", pContratacion[index].cuit);
}

int con_getEspacioVacio(Contrataciones* pContratacion , int limite)
{
    int i;
    int index;

    for(i=0;i<limite;i++)
    {
        if(pContratacion[i].isEmpty==1)
        {
            index = i;
        }
    }

    return index;
}

void con_modificarContratacion(Contrataciones* pContratacion)
{


}



