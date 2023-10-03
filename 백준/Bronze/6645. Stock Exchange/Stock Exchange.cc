#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; string str; cin >> N >> str;

        if(N == 0 && str == "END") break;

        cout << str << "\n";

        struct s { string a, b; double c; };
        vector<s> v(N);

        for(int i=0; i<N; i++)
            cin >> v[i].a >> v[i].b >> v[i].c;

        for(int i=0; i<N; i++) {
            cout << v[i].a << ": ";

            bool chk = false;

            if(v[i].b == "buy") {
                for(int j=0; j<N; j++) {
                    if(j == i) continue;
                    if(v[j].b == "buy") continue;

                    if(v[j].c <= v[i].c) {
                        cout << v[j].a << " ";
                        chk = true;
                    }
                }
            }
            else {
                for(int j=0; j<N; j++) {
                    if(j == i) continue;
                    if(v[j].b == "sell") continue;

                    if(v[j].c >= v[i].c) {
                        cout << v[j].a << " ";
                        chk = true;
                    }
                }
            }

            if(!chk) cout << "NO-ONE";

            cout << "\n";
        }
    }
}
