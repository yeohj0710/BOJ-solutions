#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<int, int> m;

    while(N--) {
        int x; cin >> x;
        m[x]++;
    }

    int M; cin >> M;

    cout << m[M] << "\n";
}
