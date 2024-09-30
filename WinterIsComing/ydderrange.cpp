#include <iostream>
using namespace std;

long long int memo[22];

long long int D(int n) {

    if(n==1) return 1;

    if (memo[n] != -1) return memo[n];

    memo[n] = (n - 1) * (D(n - 1) + D(n - 2));

    return memo[n];
}

int main() {
    for (int i = 0; i < 22; i++) {
    if (i == 1) memo[i] = 0;
    else if (i == 2) memo[i] = 1;
    else memo[i] = -1;
}


    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long int ans = D(n) + n * D(n - 1);

        cout << ans<<endl;
    }
}