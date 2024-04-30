#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    string s; cin >> s;

    for(int i=0; i<N; i++) {
        int x = ('A' + 26 - s[i]) % 26;

        if(x <= M) {
            s[i] = 'A';
            M -= x;
        }
    }

    s[N-1] += M % 26;

    cout << s << "\n";
}
