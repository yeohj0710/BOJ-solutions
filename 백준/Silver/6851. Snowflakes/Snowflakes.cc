#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<vector<int>, bool> m;
    bool check = false;

    while(N--) {
        vector<int> v(6);
        for(int i=0; i<6; i++) cin >> v[i];

        vector<int> w(v);

        for(int i=0; i<6; i++) {
            vector<int> u;

            for(int j=i; j<6; j++) u.push_back(w[j]);
            for(int j=0; j<i; j++) u.push_back(w[j]);

            v = min(v, u);
        }

        reverse(w.begin(), w.end());

        for(int i=0; i<6; i++) {
            vector<int> u;

            for(int j=i; j<6; j++) u.push_back(w[j]);
            for(int j=0; j<i; j++) u.push_back(w[j]);

            v = min(v, u);
        }

        if(m[v]) {
            check = true;
            break;
        }

        m[v] = true;
    }

    if(check) cout << "Twin snowflakes found.\n";
    else cout << "No two snowflakes are alike.\n";
}
