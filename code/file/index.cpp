#include <iostream>
using namespace std;

FILE *p;
char str[499];
int main(int argc, char** argv) {
    float x = 1000000000;
    p = fopen("test_file.txt", "r+w");
    fscanf(p, "%s", str);
    fprintf(p, "%s", str);
    fprintf(p, "Hello World!\n");
    fprintf(p, "test123456789\n");
    fprintf(p, "%f", x);
    fprintf(p, "\n");
    fclose(p);
    printf("%s", str);
    return 0;
}
