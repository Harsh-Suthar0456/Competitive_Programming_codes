#include<stdio.h>

int* maxv(int* a, int n) {
    int* q;
    int p = a[0];
    for(int i = 0; i < n; i++) {
        p = (a[i] > p) ? a[i] : p;
        if(p == a[i]) {
            q = &a[i];
        }
    }
    return q;
}

int* minv(int* a, int n) {
    int* q;
    int p = a[0];
    for(int i = 0; i < n; i++) {
        p = (a[i] < p) ? a[i] : p;
        if(p == a[i]) {
            q = &a[i];
        }
    }
    return q;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%ld", minv(arr, n) - maxv(arr, n));
}