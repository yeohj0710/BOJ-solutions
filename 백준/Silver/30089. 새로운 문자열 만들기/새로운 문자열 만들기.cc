#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int N = str.length(), mx = 0;

        for(int i=1; i<=N; i++) {
            string a = str.substr(N-i, i);
            string b = a;

            reverse(b.begin(), b.end());

            if(a == b) mx = i;
        }

        string tmp = str;

        reverse(tmp.begin(), tmp.end());

        cout << str << tmp.substr(mx, N-mx) << "\n";
    }
}
