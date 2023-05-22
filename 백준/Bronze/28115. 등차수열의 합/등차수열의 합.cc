#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool check = true;
    for(int i=1; i<N; i++)
        if(v[i] - v[i-1] != v[1] - v[0]) check = false;

    if(!check) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    for(int i=0; i<N; i++) cout << 0 << " ";
    cout << "\n";

    for(int i=0; i<N; i++) cout << v[i] << " ";
    cout << "\n";
}
