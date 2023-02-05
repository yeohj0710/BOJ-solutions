#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    bool check = true;
    int cnt = 0;

    for(int i=0; i<M; i++) {
        cin >> v[i];

        if(v[i] < 4) check = false;

        cnt += v[i] / 4;
    }

    if(cnt < N || N < M) check = false;

    if(check) cout << "DA\n";
    else cout << "NE\n";
}
