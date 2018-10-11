#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED

typedef struct
{
    int ventas;
    int ventasACobrar;
    int ventasCobradas;
    int afichesACobrar;
    int afiches;
    int id;

}Informe;

int inf_clienteMasVentas_aCobrar(Ventas* pVentas,Cliente* pCliente, int limiteV, int limiteC);

#endif // INFORMES_H_INCLUDED
