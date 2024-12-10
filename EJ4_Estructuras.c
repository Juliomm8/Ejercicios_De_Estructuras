/*
Programa 4:
Este programa permite almacenar y mostrar información de varios productos de una tienda utilizando una estructura,
Y este se vera como una factura, visualmente.
Ademas el usuario elje cuantos productos quiere que implementar.
*/
#include <stdio.h>
#include <string.h>

struct Productos
{
    char descripcion[100];
    int cantidad;
    float precioUnitario;
    float valorVenta; 
    float subTotal;
    float IVA;
    float montoIVA;
    float total;
};

int main()
{
    int tama;
    float porcentajeIVA;

    printf("Cuantos productos quiere ingresar: ");
    scanf("%d", &tama);
    getchar();

    struct Productos producto[tama];

    printf("Ingrese el IVA de los productos: ");
    scanf("%f", &porcentajeIVA);
    getchar();

    for (int i = 0; i < tama; i++)
    {
        printf("\nIngrese la descripcion %d: ", i + 1);
        fgets(producto[i].descripcion, sizeof(producto[i].descripcion), stdin);
        producto[i].descripcion[strcspn(producto[i].descripcion, "\n")] = '\0';

        printf("Ingrese la cantidad %d: ", i + 1);
        scanf("%d", &producto[i].cantidad);

        printf("Ingrese el valor unitario %d: ", i + 1);
        scanf("%f", &producto[i].precioUnitario);
        getchar();

        producto[i].valorVenta = producto[i].cantidad * producto[i].precioUnitario;

        producto[i].IVA = porcentajeIVA;
        producto[i].montoIVA = producto[i].valorVenta * (producto[i].IVA / 100);
        producto[i].total = producto[i].valorVenta + producto[i].montoIVA;
    }

    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("| %-3s | %-25s | %-10s | %-10s | %-10s | %-10s | %-10s |\n",
           "No.", "Descripción", "Cantidad", "P. Unit.", "Sin IVA", "IVA", "Total");
    printf("-----------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < tama; i++)
    {
        printf("| %-3d | %-25s | %-10d | %-10.2f | %-10.2f | %-10.2f | %-10.2f |\n",
               i + 1,
               producto[i].descripcion,
               producto[i].cantidad,
               producto[i].precioUnitario,
               producto[i].valorVenta,
               producto[i].montoIVA,
               producto[i].total);
    }

    printf("-----------------------------------------------------------------------------------------------------------\n");

    return 0;
}
