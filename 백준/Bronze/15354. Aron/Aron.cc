#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<char> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 2;
    for(int i=1; i<N; i++)
        if(v[i] != v[i-1]) ans++;

    cout << ans << "\n";
}
