/*
Programa 3:
Este programa permite almacenar y mostrar información de varios productos de una tienda utilizando una estructura,
Ademas el usuario elje cuantos productos quiere que implementar.
*/

#include <stdio.h>

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Productos
{
    char nombre[50];
    int codigo;
    int cantidad;
    float precio;
    struct Fecha elaboracion;
    struct Fecha vencimiento;
};

int main(void)
{
    int cantidad;

SN:
    printf("Cuantos productos quiere agregar: ");
    if (scanf("%d", &cantidad) != 1 || cantidad < 1)
    {
        printf("\nError\nDebe ingresar numeros positivos.\n");
        while (getchar() != '\n'); 
        goto SN;
    }
    while (getchar() != '\n'); 

    struct Productos producto[cantidad];

    printf("\n---------------Ingresar Productos---------------\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        fgets(producto[i].nombre, sizeof(producto[i].nombre), stdin);

        printf("Ingrese el codigo del producto %d: ", i + 1);
        scanf("%d", &producto[i].codigo);

        printf("Ingrese la cantidad del producto %d: ", i + 1);
        scanf("%d", &producto[i].cantidad);

        printf("Ingrese el precio del producto %d: ", i + 1);
        scanf("%f", &producto[i].precio);

        printf("Ingrese la fecha de Elaboracion del producto %d: ", i + 1);
        printf("\nDia: ");
        scanf("%d", &producto[i].elaboracion.dia);
        printf("Mes: ");
        scanf("%d", &producto[i].elaboracion.mes);
        printf("Anio: ");
        scanf("%d", &producto[i].elaboracion.anio);

        printf("Ingrese la fecha de vencimiento del producto %d: ", i + 1);
        printf("\nDia: ");
        scanf("%d", &producto[i].vencimiento.dia);
        printf("Mes: ");
        scanf("%d", &producto[i].vencimiento.mes);
        printf("Anio: ");
        scanf("%d", &producto[i].vencimiento.anio);

        while (getchar() != '\n');
    }

    printf("\n---------------Productos Ingresados---------------\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("\n=======================================\n");
        printf("El nombre del producto %d: %s", i + 1, producto[i].nombre);
        printf("El codigo del producto %d: %d", i + 1, producto[i].codigo);
        printf("\nLa cantidad del producto %d: %d", i + 1, producto[i].cantidad);
        printf("\nEl precio del producto %d: %.2f", i + 1, producto[i].precio);
        printf("\nLa fecha de elaboracion del producto %d: %02d/%02d/%04d", 
               i + 1, producto[i].elaboracion.dia, producto[i].elaboracion.mes, producto[i].elaboracion.anio);
        printf("\nLa fecha de vencimiento del producto %d: %02d/%02d/%04d", 
               i + 1, producto[i].vencimiento.dia, producto[i].vencimiento.mes, producto[i].vencimiento.anio);
        printf("\n=======================================\n\n");
    }

    return 0;
}
