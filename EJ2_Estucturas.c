/*
Programa 2:
Este programa permite almacenar y mostrar información de un solo producto de una tienda utilizando una estructura.
*/

#include <stdio.h>
struct fecha{
  int dia;
  int mes;
  int anio;
};

struct productos {
  char nombre[50];
  int cantidad;
  int codigo;
  float precio;
  struct fecha Elaboracion;
  struct fecha Vencimiento;

};


int main(void) {
  struct productos producto1;

  printf("Ingrese el nombre del producto: ");
  fgets(producto1.nombre, 50, stdin);
  
  printf("\nIngrese la cantidad del producto: ");
  scanf("%d", &producto1.cantidad);

  printf("\nIngrese el código del producto: ");
  scanf("%d", &producto1.codigo);

  printf("\nIngrese el precio del producto: ");
  scanf("%f", &producto1.precio);

  printf("\nIngrese la fecha de elaboración\n");
  printf("Día: ");
  scanf("%d", &producto1.Elaboracion.dia);
  printf( "Mes: ");
  scanf("%d", &producto1.Elaboracion.mes);
  printf("Año: ");
  scanf("%d", &producto1.Elaboracion.anio);
  
  printf("\nIngrese la fecha de vencimiento\n");
  printf("Día: ");
  scanf("%d", &producto1.Vencimiento.dia);
  printf( "Mes: ");
  scanf("%d", &producto1.Vencimiento.mes);
  printf("Año: ");
  scanf("%d", &producto1.Vencimiento.anio);



  printf("\n\n\n");
  printf("Nombre: %s", producto1.nombre);
  printf("Cantidad: %d\n", producto1.cantidad);
  printf("Código: %d\n", producto1.codigo);
  printf("Precio: %.2f\n", producto1.precio);
  printf("Fecha de elaboración: %d/%d/%d\n", producto1.Elaboracion.dia, producto1.Elaboracion.mes, producto1.Elaboracion.anio);
  printf("Fecha de vencimiento: %d/%d/%d\n", producto1.Vencimiento.dia, producto1.Vencimiento.mes, producto1.Vencimiento.anio);
    
  
  

  
  return 0;
}
