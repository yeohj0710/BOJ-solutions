#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int M; cin >> M;

    vector<int> u(M);
    for(int i=0; i<M; i++) cin >> u[i];

    sort(u.begin(), u.end(), greater<int>());

    int i = 0, j = 0;

    while(i < N && j < N) {
        if(v[i] <= u[j]) i++, j++;
        else i++;
    }

    cout << j << "\n";
}
