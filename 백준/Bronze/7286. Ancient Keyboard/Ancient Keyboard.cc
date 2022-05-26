#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        bool check[26][1001] = {};

        while(N--) {
            char c; cin >> c;
            int a, b; cin >> a >> b;

            for(int i=a; i<b; i++) check[c - 'A'][i] = true;
        }

        for(int i=0; i<=1000; i++) {
            int cnt = 0;
            for(int j=0; j<26; j++)
                if(check[j][i]) cnt++;

            if(cnt > 0) cout << char('A' + cnt - 1);
        }

        cout << "\n";
    }
}
