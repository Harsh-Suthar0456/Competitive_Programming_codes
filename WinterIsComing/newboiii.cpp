#include <iostream>
#include <cmath>
using namespace std;

#define MOD 1000000007
#define MAX_N 100000
#define MAX_J 62

long long int sumstore[MAX_N][MAX_J];
long long int arr[MAX_N], query[MAX_N][2];

void precomputeSums(int n) {
    for (int i = 0; i < n; i++) {
        sumstore[i][0] = arr[i];
        for (int j = 1; j < MAX_J; j++) {
            sumstore[i][j] = (sumstore[i][j - 1] * 2) % MOD;
            sumstore[i][j] = (sumstore[i][j] + arr[i + j] * (1LL << min(j, 26))) % MOD;
        }
    }
}

long long int solve(int n, int qnum) {
    long long int sum = 0;
    for (int i = query[qnum][0]; i <= query[qnum][1]; i++) {
        sum = (sum + sumstore[i][query[qnum][1] - i]) % MOD;
    }
    return sum;
}

int main() {
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        cin >> query[i][0] >> query[i][1];
        query[i][0]--;
        query[i][1]--;
    }

    precomputeSums(n);

    for (int i = 0; i < q; i++) {
        cout << solve(n, i) << endl;
    }

    return 0;
}