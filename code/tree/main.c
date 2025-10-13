#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void tree1();
void tree2();
void tree3();
void numChange(const char* asl, int type);


int main() {
    tree1();
    printf("\n-----------------------------------\n");
    tree2();
    printf("\n-----------------------------------\n");
    tree3();
    printf("\n-----------------------------------\n");
    numChange("0277", 8);
    numChange("0xcc", 16);
    numChange("0xab", 16);
    numChange("0333", 8);
    numChange("0555", 8);
    numChange("0xff", 16);
    return 0;
}

void tree1() {
    for (int numid = 5; numid>= 1; numid--) {
        for (int i = numid; i  > 0; i--) {
            printf("*");
        }
        printf("\n");
    }
}

void tree2() {
    int i, j;
    int n= 6;

    // 上半部分
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= ( i - 1); j++)
            printf("*");
        printf("\n");
    }

    // 下半部分
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= ( i - 1); j++)
            printf("*");
        printf("\n");
    }
}

void tree3() {
    printf("    *\n");
    printf("   * *\n");
    printf("  * * *\n");
    printf(" * * * *\n");
    printf("* * * * *\n");
    printf(" * * * *\n");
    printf("  * * *\n");
    printf("   * *\n");
    printf("    *\n");
}

void numChange(const char *asl, int type) {
    long int value = strtol(asl, NULL, type);
    printf("%ld\n", value);
}
