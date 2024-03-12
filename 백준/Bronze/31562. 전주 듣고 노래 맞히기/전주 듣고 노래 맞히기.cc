#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    unordered_map<string, vector<string>> m;

    while(N--) {
        int x; string str; cin >> x >> str;

        string s = "";

        for(int i=0; i<7; i++) {
            char ch; cin >> ch;

            if(i < 3) s += ch;
        }

        m[s].push_back(str);
    }

    while(M--) {
        string str = "";

        for(int i=0; i<3; i++) {
            char ch; cin >> ch;

            str += ch;
        }

        if(m[str].size() == 1) cout << m[str][0] << "\n";
        else if(m[str].size() >= 2) cout << "?\n";
        else cout << "!\n";
    }
}
