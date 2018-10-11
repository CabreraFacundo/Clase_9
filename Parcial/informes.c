#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "cliente.h"
#include "ventas.h"
#include <stdio_ext.h>
#include <string.h>
#include "informes.h"

int inf_clienteMasVentas_aCobrar(Ventas* pVentas,Cliente* pCliente, int limiteV, int limiteC)
{
    int i;
    //Informe aux[limiteC];
    int aux;
    int max=0;
    int max1 = 0;

    for(i=0;i<limiteC;i++)
    {
        aux= ven_cantidadVentas_aCobrar(pVentas,limiteV,pCliente[i].id);
        if(aux > max)
        {
            max = aux;
        aux= ven_cantidadVentas_aCobrar(pVentas,limiteV,pCliente[i].id);
        if(aux > max)
        {
            max = aux;




            auxId = pCliente[i].id;
        }
    }

    return auxId;
}


int inf_clienteMasVentasCobradas(Ventas* pVentas,Cliente* pCliente, int limiteV, int limiteC)
{
    int i;
    Informe aux[limiteC];
    int max=0;

    for(i=0;i<limiteC;i++)
    {
        aux[i].ventasACobrar = ven_cantidadVentas_cobradas(pVentas,limiteV,pCliente[i].id);
        if(aux[i].ventasACobrar > max)
        {
            max = pCliente[i].id;
        }
    }

    return max;
}

int inf_clienteMasVentas(Ventas* pVentas, Cliente* pCliente, int limiteV, int limiteC)
{
    int i;
    Informe aux[limiteC];
    int max=0;

    for(i=0;i<limiteC;i++)
    {
        aux[i].ventasACobrar = ven_cantidadVentasCliente(pVentas,limiteV,pCliente[i].id);
        if(aux[i].ventasACobrar > max)
        {
            max = pCliente[i].id;
        }
    }

    return max;
}

int inf_clienteMasAfiches_aCobrar(Ventas* pVentas,Cliente* pCliente, int limiteC, int limiteV)
{
    int

}



