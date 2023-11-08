#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    for(int i=1; i<=N; i++)
        cout << i * (N - i + 1) << "\n";
}
