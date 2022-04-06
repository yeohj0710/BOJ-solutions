#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    long long ans = 1;
    for(int i=1; i<=N; i++) {
        ans *= i;

        while(ans % 10 == 0) ans /= 10;

        ans %= 1000000000000;
    }

    printf("%05d", ans%100000);
}
