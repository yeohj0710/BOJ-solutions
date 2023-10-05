#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {0, 100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};

    int N; cin >> N;

    int sum = 0;

    for(int i=0; i<v.size(); i++) sum += v[i];

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        sum -= v[x];
    }

    int M; cin >> M;

    if(M * (10 - N) > sum) cout << "deal\n";
    else cout << "no deal\n";
}
