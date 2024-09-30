#include<stdio.h>

int main() {
    int n, arr[2000], target, count, maxsum = 0;
    scanf("%d", &n);
    int answer = n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        maxsum += arr[i];
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        int sum = 0, increase = 0, count = 0;
        while (sum <= target && i + increase < n) {
            sum += arr[i];
            count++;
            increase++;
        }
        if (sum >= target) {
            answer = (answer < count) ? answer : count;
        }
    }
    if (maxsum >= target) {
        printf("%d", answer);
    } else {
        printf("%d",0);
    }
    return 0;
}