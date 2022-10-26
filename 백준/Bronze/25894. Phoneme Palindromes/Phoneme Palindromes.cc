#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Test case #" << t << ":\n";

        int N; cin >> N;

        map<char, char> m;

        while(N--) {
            char a, b; cin >> a >> b;

            m[a] = b;
        }

        int M; cin >> M;

        while(M--) {
            string str; cin >> str;

            cout << str << " ";

            for(int i=0; i<str.length(); i++)
                if(m[str[i]] != NULL) str[i] = m[str[i]];

            bool check = true;

            for(int i=0; i<str.length(); i++)
                if(str[i] != str[str.length()-i-1]) check = false;

            if(check) cout << "YES\n";
            else cout << "NO\n";
        }

        cout << "\n";
    }
}
