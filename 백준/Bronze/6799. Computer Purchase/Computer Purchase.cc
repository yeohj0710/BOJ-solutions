#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<string, int> x, pair<string, int> y) {
    if(x.second != y.second) return x.second > y.second;
    else return x.first < y.first;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<string, int>> v(N);

    for(int i=0; i<N; i++) {
        int a, b, c;

        cin >> v[i].first >> a >> b >> c;

        v[i].second = a*2 + b*3 + c;
    }

    if(N == 0) return 0;
    if(N == 1) {
        cout << v[0].first << "\n";
        return 0;
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].first << "\n" << v[1].first << "\n";
}
