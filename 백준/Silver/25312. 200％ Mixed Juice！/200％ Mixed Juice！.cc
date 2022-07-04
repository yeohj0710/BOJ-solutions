#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return (double)a.second/a.first > (double)b.second/b.first;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);

    int a = 0, b = 0;
    for(int i=0; i<N; i++) {
        if(a + v[i].first > M) {
            int x = b * v[i].first + (M - a) * v[i].second;
            int y = v[i].first;

            cout << x / __gcd(x,y) << "/" << y / __gcd(x, y) << "\n";

            return 0;
        }

        a += v[i].first;
        b += v[i].second;
    }

    cout << b << "/" << 1 << "\n";
}
