#include <unistd.h>
#include <stdio.h>

int main(void) {
  pid_t id_actual, id_padre;
  id_actual = getpid();
  id_padre  = getppid();

  printf("Mi PID es: %d\n", id_actual);
  printf("El PID de mi papa es: %d\n", id_padre);

  return 0;
}