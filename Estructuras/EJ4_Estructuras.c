/*
Programa 4:
Este programa permite almacenar y mostrar información de varios productos de una tienda utilizando una estructura,
Y este se vera como una factura, visualmente.
Ademas el usuario elje cuantos productos quiere que implementar.
*/
#include <stdio.h>
#include <string.h>

// Definición de la estructura Productos para almacenar datos de cada producto
struct Productos
{
    char descripcion[100]; // Nombre o descripción del producto
    int cantidad;          // Cantidad del producto
    float precioUnitario;  // Precio unitario del producto
    float valorVenta;      // Precio sin IVA (cantidad * precio unitario)
    float IVA;             // Porcentaje de IVA aplicado
    float montoIVA;        // Monto del IVA (valorVenta * IVA / 100)
    float total;           // Total con IVA incluido
};

int main()
{
    int tama;            // Número de productos a ingresar 
    float porcentajeIVA; // Porcentaje de IVA ingresado por el usuario

    // Solicitar la cantidad de productos a ingresar
    printf("Cuantos productos quiere ingresar: ");
    scanf("%d", &tama);
    getchar();

    struct Productos producto[tama];

    // Solicitar el porcentaje de IVA
    printf("Ingrese el IVA de los productos: ");
    scanf("%f", &porcentajeIVA);
    getchar();

    for (int i = 0; i < tama; i++)
    {
        printf("\nIngrese la descripcion %d: ", i + 1);
        fgets(producto[i].descripcion, sizeof(producto[i].descripcion), stdin);
        producto[i].descripcion[strcspn(producto[i].descripcion, "\n")] = '\0';

        do
        {
            printf("Ingrese la cantidad %d: ", i + 1);
            scanf("%d", &producto[i].cantidad);
        } while (producto[i].cantidad < 0);

        do
        {
            printf("Ingrese el valor unitario %d: ", i + 1);
            scanf("%f", &producto[i].precioUnitario);
        } while (producto[i].precioUnitario < 0);

        getchar();

        producto[i].valorVenta = producto[i].cantidad * producto[i].precioUnitario; // Sin IVA
        producto[i].montoIVA = producto[i].valorVenta * (porcentajeIVA / 100);      // IVA
        producto[i].total = producto[i].valorVenta + producto[i].montoIVA;          // Total con IVA
    }

    // Mostrar los datos como una factura
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
