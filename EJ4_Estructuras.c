/*
Programa 4:
Este programa permite almacenar y mostrar información de varios productos de una tienda utilizando una estructura,
Y este se vera como una factura, visualmente.
Ademas el usuario elje cuantos productos quiere que implementar.
*/
#include <stdio.h>

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

    for (int i = 0; tama > i; i++)
    {
        printf("\nIngrese la descripcion %d: ", i + 1);
        fgets(producto[i].descripcion, sizeof producto[i].descripcion, stdin);
        fflush(stdin);

        printf("Ingrese la cantidad %d: ", i + 1);
        scanf("%d", &producto[i].cantidad);

        printf("Ingrese el valor unitario %d: ", i + 1);
        scanf("%f", &producto[i].precioUnitario);

        producto[i].valorVenta = producto[i].cantidad * producto[i].precioUnitario;

        producto[i].IVA = porcentajeIVA;
        producto[i].montoIVA = producto[i].valorVenta * (producto[i].IVA / 100);
        producto[i].total = producto[i].valorVenta + producto[i].montoIVA;
        fflush(stdin);
    }

    printf("------------------------------------------------------------\n");
    printf("| %-3s | %-15s | %-8s | %-8s | %-8s | %-8s |\n",
           "No.", "Descripción", "Cantidad", "P. Unit.", "IVA", "Total");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < tama; i++)
    {
        printf("| %-3d | %-15s | %-8d | %-8.2f | %-8.2f | %-8.2f |\n",
               i + 1,
               producto[i].descripcion,
               producto[i].cantidad,
               producto[i].precioUnitario,
               producto[i].montoIVA,
               producto[i].total);
    }

    printf("------------------------------------------------------------\n");

    return 0;
}
