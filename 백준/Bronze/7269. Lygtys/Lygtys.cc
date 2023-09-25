#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    int last = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        if(i < N-1) last += v[i];
    }

    last = (last - v[N-1]) / (N - 2);

    for(int i=0; i<N-1; i++)
        cout << v[i] - last << "\n";

    cout << last << "\n";
}

