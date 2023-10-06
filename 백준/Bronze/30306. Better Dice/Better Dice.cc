#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    int a = 0, b = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            if(v[i] > u[j]) a++;
            else if(v[i] < u[j]) b++;
        }

    if(a > b) cout << "first\n";
    else if(a < b) cout << "second\n";
    else cout << "tie\n";
}
