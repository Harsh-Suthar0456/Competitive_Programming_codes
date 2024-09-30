#include <stdio.h>

int main() {
    char fname[100];
    scanf("%s", fname);
    char cc;
    int ccount = 0, wcount = 0;
    FILE *inputf;
    inputf = fopen(fname, "r");
    if (inputf != NULL) {
        wcount++;
    }
    while (fscanf(inputf, "%c", &cc) != EOF) {
        if (cc == ' ' || cc == '\n') {
            wcount++;
        }
        ccount++;
    }
    printf("%d %d", ccount, wcount);
    return 0;
}