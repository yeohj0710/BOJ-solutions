#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string sq = to_string(N*N), n = to_string(N);

        if(sq.substr(sq.length() - n.length(), n.length()) == n) cout << "YES\n";
        else cout << "NO\n";
    }
}
