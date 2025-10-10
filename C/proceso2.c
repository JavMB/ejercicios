#include <stdio.h>
#include <unistd.h>
int main() {
  printf("Ejemplo de uso de excel():");
  printf("\n\tListado del directorio actual:");
  execl("/bin/ls","ls","-l", (char *)NULL);
  printf("\nEsta instrucción no se llega a ejecutar");
  return 0;
}