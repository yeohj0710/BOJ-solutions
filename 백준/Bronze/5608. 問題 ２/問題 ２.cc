#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<char, char> m;

    while(N--) {
        char a, b; cin >> a >> b;

        m[a] = b;
    }

    int M; cin >> M;

    while(M--) {
        char a; cin >> a;

        if(m[a] != NULL) cout << m[a];
        else cout << a;
    }
    cout << "\n";
}
