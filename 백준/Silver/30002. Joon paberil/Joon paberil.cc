#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int x = (int)sqrt(N);
    int y = N - x * x;
    int z = (x * x + (x + 1) * (x + 1) - 1) / 2;

    if(x % 2 == 0) {
        if(N < z) cout << N - x * x + 1 << " " << x + 1 << "\n";
        else cout << x + 1 << " " << (x + 1) * (x + 1) - N << "\n";
    }
    else {
        if(N < z) cout << x + 1 << " " << N - x * x + 1 << "\n";
        else cout << (x + 1) * (x + 1) - N << " " << x + 1 << "\n";
    }
}
