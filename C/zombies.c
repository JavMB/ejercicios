#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){
    pid_t pid= fork();

    if (pid<0){
        perror("fork");
        return 1;
    }
    
    
    


}