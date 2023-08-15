#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    int sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        sum += v[i];
    }

    int idx = -1;

    for(int i=0; i<N; i++)
        if(v[i] * 2 == sum) idx = i;

    for(int i=0; i<N; i++)
        if(i != idx) cout << v[i] << " ";

    cout << v[idx] << "\n";
}

