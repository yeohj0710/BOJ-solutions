#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[21] = {0, 1, 1};

    int N; cin >> N;

    for(int i=3; i<=N; i++) v[i] = v[i-1] + v[i-2];

    cout << v[N] << "\n";
}
