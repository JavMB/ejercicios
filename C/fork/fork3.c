#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
  pid_t pid, Hijo_pid, pid2, Hijo2_pid, id_actual;

  pid = fork();   // Soy el abuelo e intento crear a mi hijo

  if (pid == -1) { // Hubo error
    printf("Hubo un problema de impotencia al crear el hijo\n");
    exit(-1);
  }

  if (pid == 0) {
    // Nos encontramos en el hijo
    pid2 = fork(); // soy el hijo y creo al nieto

    switch(pid2) {
      case -1: // error
        printf("No se ha podido crear el proceso nieto en el hijo\n");
        exit(-1);
        break;
      case 0: // Estoy en el nieto
        printf("\t\tSoy el proceso NIETO %d, Mi padre es = %d\n",
               getpid(), getppid());
        break;
      default: // proceso padre (hijo)
        Hijo2_pid = wait(NULL); // espero a que termine nieto, que es mi hijo
        printf("\t\tSoy el proceso HIJO %d, Mi padre es = %d\n",
               getpid(), getppid());
        printf("\tMi hijo: %d terminó.\n", Hijo2_pid);
    }

  } else {
    // Nos encontramos en el abuelo
    id_actual = wait(NULL); // Espero a que termine mi hijo, que a su vez espera que termine el nieto
    printf("Yo soy el abuelo de las dos criaturas anteriores:\n\t");
    printf("Mi PID es %d, el de mi padre (Sistema Operativo) es %d.\n\t", getpid(), getppid());
    printf("Mi hijo si es de verdad hijo mio deberia tener el PID %d.\n", pid);
    printf("A mi nieto no lo puedo conocer, solo reconozco a mi generación inmediata\n");
    printf("Para conocer a mi NIETO debería implementar algún sistema de comunicación entre procesos.\n");
  }
  return 0;
}