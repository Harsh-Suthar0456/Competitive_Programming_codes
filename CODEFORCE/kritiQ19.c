#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct currency {
    char name[100];
    double rate;
};

int main() {
    int n, q;
    char ok[100];
    scanf("%s", ok);
    struct currency data[100];
    FILE *curr = fopen(ok, "r");
    fscanf(curr, "%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        fscanf(curr, "%s %lf", data[i].name, &data[i].rate);
    }
    double ans[2000], value;
    char c1[100], c2[100];
    for (int i = 0; i < q; i++) {
        fscanf(curr, "%lf %s %s", &value, c1, c2);
        for (int j = 0; j < n; j++) {
            if (strcmp(c1, data[j].name) == 0) {
                value *= data[j].rate;
                break;
            }
        }
        for (int j = 0; j < n; j++) {
            if (strcmp(c2, data[j].name) == 0) {
                value /= data[j].rate;
                break;
            }
        }
        ans[i] = value;
    }
    for (int i = 0; i < q; i++) {
        printf("%f\n", ans[i]);
    }
    fclose(curr);
    return 0;
}