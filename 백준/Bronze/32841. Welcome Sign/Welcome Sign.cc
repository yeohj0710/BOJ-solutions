#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    bool flag = false;

    while(n--) {
        string s; cin >> s;

        if((m - s.length()) % 2 == 0) {
            int x = (m - s.length()) / 2;

            for(int i=0; i<x; i++) cout << ".";

            cout << s;

            for(int i=0; i<x; i++) cout << ".";

            cout << "\n";
        }
        else {
            int x = m - s.length();

            if(!flag) {
                for(int i=0; i<x/2; i++) cout << ".";

                cout << s;

                for(int i=0; i<x-x/2; i++) cout << ".";
            }
            else {
                for(int i=0; i<x-x/2; i++) cout << ".";

                cout << s;

                for(int i=0; i<x/2; i++) cout << ".";
            }

            cout << "\n";

            flag = !flag;
        }
    }
}
