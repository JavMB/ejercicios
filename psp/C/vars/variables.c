
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main() {
    int var = 6; // Variable entera inicializada a 6
    pid_t pid = fork(); // Crear un nuevo proceso

    if (pid < 0) {
        // Error al crear el proceso
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        // Proceso hijo
        var -= 5; // Restar 5 a la variable
        printf("Proceso hijo: var = %d\n", var);
    } else {
        // Proceso padre
        wait(NULL); // Esperar a que el hijo termine
        var += 5; // Incrementar la variable en 5
        printf("Proceso padre: var = %d\n", var);
    }

    return 0;
}