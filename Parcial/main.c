#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "cliente.h"
#include "ventas.h"
#include <stdio_ext.h>
#define LIMITE_CLIENTE 10
#define LIMITE_VENTAS 1000
#include "informes.h"

int main()
{
    Cliente cliente[LIMITE_CLIENTE];
    Ventas  venta[LIMITE_VENTAS];
    int menu;
    char respuesta='n';


    cl_init_isEmpty(cliente,LIMITE_CLIENTE);
    ven_init_isEmpty(venta,LIMITE_VENTAS);


    cl_altaClienteForzada(cliente,LIMITE_CLIENTE,"Facundo","Cabrera",1234);
    cl_altaClienteForzada(cliente,LIMITE_CLIENTE,"Martin","Gomez",3456);
    cl_altaClienteForzada(cliente,LIMITE_CLIENTE,"Lucas","Gago",4567);
    cl_altaClienteForzada(cliente,LIMITE_CLIENTE,"Mariano","Rojo",5678);
    cl_altaClienteForzada(cliente,LIMITE_CLIENTE,"Sebastian","Ortiz",9876);

    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo1",3,1,1,1234,1);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo11",3,1,1,1234,1);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo111",3,1,1,1234,1);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo1111",3,1,1,1234,1);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo2",2,2,2,3456,3);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo3",1,3,1,4567,1);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo4",6,4,1,5678,3);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo5",5,5,1,9876,3);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo55",5,5,1,9876,3);
    ven_altaVentaForzada(venta,LIMITE_VENTAS,"archivo555",5,5,1,9876,3);



    do
    {
        system("clear");
        //system("cls");
        printf("\nMenu ");
        printf("\n1-Alta cliente");
        printf("\n2-Modificar cliente");
        printf("\n3-Baja cliente");
        printf("\n4-Vender Afiche");
        printf("\n5-Editar Venta");
        printf("\n6-Cobrar venta");
        printf("\n7-Imprimir clientas");
        printf("\n8-Informar");
        printf("\n9-Salir");

        menu=utn_getInt("\nIngrese opcion: ");

        switch(menu)
        {
            case 1:
                cl_altaCliente(cliente,LIMITE_CLIENTE);
                printf("Desea volver al menu?(s o n)");
                while(scanf("%c",&respuesta)==0 || (respuesta != 's' && respuesta!='n' && respuesta!='S' && respuesta!='N'))
                {
                    printf("Error. Ingrese s o n: ");
                }
                break;
            case 2:
                cl_modificarCliente(cliente,LIMITE_CLIENTE);
                printf("Desea volver al menu?(s o n)");
                while(scanf("%c",&respuesta)==0 || (respuesta != 's' && respuesta!='n' && respuesta!='S' && respuesta!='N'))
                {
                    printf("Error. Ingrese s o n: ");
                }
                break;
            case 3:
                cl_bajaCliente(cliente,LIMITE_CLIENTE);
                printf("Desea volver al menu?(s o n)");
                while(scanf("%c",&respuesta)==0 || (respuesta != 's' && respuesta!='n' && respuesta!='S' && respuesta!='N'))
                {
                    printf("Error. Ingrese s o n: ");
                }
                break;
            case 4:
                ven_altaVentas(venta,cliente,LIMITE_VENTAS);
                printf("Desea volver al menu?(s o n)");
                while(scanf("%c",&respuesta)==0 || (respuesta != 's' && respuesta!='n' && respuesta!='S' && respuesta!='N'))
                {
                    printf("Error. Ingrese s o n: ");
                }
                break;
            case 5:
                ven_modificarVentas(venta,cliente,LIMITE_VENTAS,LIMITE_CLIENTE);
                printf("Desea volver al menu?(s o n)");
                while(scanf("%c",&respuesta)==0 || (respuesta != 's' && respuesta!='n' && respuesta!='S' && respuesta!='N'))
                {
                    printf("Error. Ingrese s o n: ");
                }
                break;
            case 6:
                ven_cobrarVentas(venta,cliente,LIMITE_VENTAS,LIMITE_CLIENTE);
                printf("Desea volver al menu?(s o n)");
                while(scanf("%c",&respuesta)==0 || (respuesta != 's' && respuesta!='n' && respuesta!='S' && respuesta!='N'))
                {
                    printf("Error. Ingrese s o n: ");
                }
                break;
            case 7:
                cl_imprimirCliente(cliente,venta,LIMITE_CLIENTE,LIMITE_VENTAS);
                while(scanf("%c",&respuesta)==0 || (respuesta != 's' && respuesta!='n' && respuesta!='S' && respuesta!='N'))
                {
                    printf("Error. Ingrese s o n: ");
                }
                break;
            case 8:

                break;
            case 9:
                respuesta= 'n';
                break;
        }
    }while(respuesta!='n');


    return 0;
}
