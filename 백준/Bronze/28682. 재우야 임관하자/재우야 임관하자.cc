#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v(N);

    for(int i=0; i<N; i++) cout << "swimming ";
    cout << endl;

    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<N; i++) {
        if(v[i] == "bowling") cout << "soccer ";
        else cout << "bowling ";
    }
    cout << endl;
}
