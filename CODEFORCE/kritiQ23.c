#include<stdio.h>

struct dist{
    int feet;
    float inch;
};

struct dist distadder(struct dist d1, struct dist d2){
    struct dist result;
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    while(result.inch >= 12){
        result.feet++;
        result.inch -= 12;
    }
    return result;
}

int main(){
    struct dist value[100], result;
    result.feet = 0;
    result.inch = 0.0;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %f", &value[i].feet, &value[i].inch);
        result = distadder(result, value[i]);
    }
    printf("%.2d %.2f", result.feet, result.inch);
    return 0;
}
