#include <stdio.h>
#include <stdlib.h>
int main() {
  printf("Ejemplo de uso de system():");
  printf("\n\tListado del directorio actual y envio a un fichero:");
  printf("%d",system("ls > ficherosalida.txt"));
  printf("\n\tAbrimos con nano el fichero ...");
  printf("%d",system("nano ficherosalida.txt"));
  printf("\n\tEste comando es erroneo: %d",system("msword"));
  printf("\nFin del programa");

  return 0;

}