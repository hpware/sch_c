#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Hello World\n");
    while (1) {
        printf("Hello World \n");
        usleep(300000);
    }
    return 0;
}
