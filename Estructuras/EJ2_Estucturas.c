/*
Programa 2:
Este programa permite almacenar y mostrar información de un solo producto de una tienda utilizando una estructura.
*/

#include <stdio.h> // Biblioteca estándar de entrada/salida

// Definición de la estructura `fecha`
// Representa una fecha con día, mes y año como enteros
struct fecha {
  int dia;
  int mes;
  int anio;
};

// Definición de la estructura `productos`
// Representa la información de un producto en una tienda
struct productos {
  char nombre[50];          // Nombre del producto (cadena de caracteres)
  int cantidad;             // Cantidad disponible del producto
  int codigo;               // Código único del producto
  float precio;             // Precio del producto
  struct fecha Elaboracion; // Fecha de elaboración del producto
  struct fecha Vencimiento; // Fecha de vencimiento del producto
};

int main(void) {
  struct productos producto1; // Declaración de una variable de tipo `productos`

  // Solicitar el nombre del producto al usuario
  printf("Ingrese el nombre del producto: ");
  fgets(producto1.nombre, 50, stdin); // Leer una cadena con espacios desde la entrada estándar
  
  // Solicitar la cantidad del producto
  printf("\nIngrese la cantidad del producto: ");
  scanf("%d", &producto1.cantidad); // Leer un número entero

  // Solicitar el código del producto
  printf("\nIngrese el código del producto: ");
  scanf("%d", &producto1.codigo); // Leer un número entero

  // Solicitar el precio del producto
  printf("\nIngrese el precio del producto: ");
  scanf("%f", &producto1.precio); // Leer un número flotante

  // Solicitar la fecha de elaboración
  printf("\nIngrese la fecha de elaboración\n");
  printf("Día: ");
  scanf("%d", &producto1.Elaboracion.dia); // Leer el día como entero
  printf("Mes: ");
  scanf("%d", &producto1.Elaboracion.mes); // Leer el mes como entero
  printf("Año: ");
  scanf("%d", &producto1.Elaboracion.anio); // Leer el año como entero
  
  // Solicitar la fecha de vencimiento
  printf("\nIngrese la fecha de vencimiento\n");
  printf("Día: ");
  scanf("%d", &producto1.Vencimiento.dia); // Leer el día como entero
  printf("Mes: ");
  scanf("%d", &producto1.Vencimiento.mes); // Leer el mes como entero
  printf("Año: ");
  scanf("%d", &producto1.Vencimiento.anio); // Leer el año como entero

  // Imprimir los datos del producto ingresado
  printf("\n\n\n");
  printf("Nombre: %s", producto1.nombre); // Mostrar el nombre del producto
  printf("Cantidad: %d\n", producto1.cantidad); // Mostrar la cantidad
  printf("Código: %d\n", producto1.codigo); // Mostrar el código
  printf("Precio: %.2f\n", producto1.precio); // Mostrar el precio con dos decimales
  printf("Fecha de elaboración: %d/%d/%d\n", 
          producto1.Elaboracion.dia, 
          producto1.Elaboracion.mes, 
          producto1.Elaboracion.anio); // Mostrar la fecha de elaboración
  printf("Fecha de vencimiento: %d/%d/%d\n", 
          producto1.Vencimiento.dia, 
          producto1.Vencimiento.mes, 
          producto1.Vencimiento.anio); // Mostrar la fecha de vencimiento

  return 0; // Indicar que el programa finalizó exitosamente
}
