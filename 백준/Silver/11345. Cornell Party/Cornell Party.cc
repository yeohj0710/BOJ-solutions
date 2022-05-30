#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> a, b;

        map<int, int> m;
        vector<int> v;

        for(int i=0; i<N; i++) {
            int x; cin >> x;
            m[x]++;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        for(int i=0; i<v.size(); i++) a.push_back(m[v[i]]);

        m.clear();
        v.clear();

        for(int i=0; i<N; i++) {
            int x; cin >> x;
            m[x]++;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        for(int i=0; i<v.size(); i++) b.push_back(m[v[i]]);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool check = true;

        if(a.size() != b.size()) check = false;
        else {
            for(int i=0; i<a.size(); i++)
                if(a[i] != b[i]) check = false;
        }

        if(check) cout << "what a lovely party\n";
        else cout << "you've messed up, Cornell\n";
    }
}
