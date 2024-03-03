#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<char> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    char ch; cin >> ch;

    int ans = 0;

    for(int i=0; i<N; i++)
        if(v[i] == ch) ans++;

    cout << ans << "\n";
}
