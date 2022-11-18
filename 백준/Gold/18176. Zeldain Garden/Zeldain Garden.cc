#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int N) {
    int sq = (int)sqrt(N);

    int sum = 0;

    for(int i=1; i<=sq; i++) sum += N / i;

    return sum * 2 - sq * sq;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int ans = f(b) - f(a-1);

    cout << ans << "\n";
}
