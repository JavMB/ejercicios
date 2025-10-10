#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
  pid_t id_actual, id_padre, pid;

  pid = fork();

  if (pid == -1) { // Hubo error
    printf("Hubo un problema de impotencia al crear el hijo");
    exit(-1); }
  // Si todo va bien y se crea el hijo tenemos que hacer
  // que el programa ejecute un código con distinto para cada
  // proceso
  if (pid == 0) { // Nos encontramos en el hijo
    printf ("Soy el proceso hijo\n\t");
    printf(" Mi PID es %d, y el mi papa %d\n",getpid(),getppid());
  } else { // Nos encontramos en el padre
    id_actual = wait(NULL);
    printf("Yo soy el padre de la criatura:\n\t");
    printf("Mi PID es %d, el de mi padre (abuelo de la criatura) es %d.\n\t",
           getpid(),getppid());
    printf("Mi hijo si es de verdad hijo mio deberia tener el PID %d.\n",pid);
  }
  return 0;
}