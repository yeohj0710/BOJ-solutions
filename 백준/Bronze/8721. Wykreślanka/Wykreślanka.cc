#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0, curr = 1;
    for(int i=0; i<N; i++) {
        if(v[i] == curr) curr++;
        else ans++;
    }

    cout << ans << "\n";
}
