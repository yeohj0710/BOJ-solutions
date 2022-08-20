#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        unordered_map<string, int> m;
        vector<string> v;

        while(N--) {
            string str; cin >> str;
            int x; cin >> x;

            if(m[str] == 0) {
                m[str] = x;

                v.push_back(str);
            }
            else m[str] = min(m[str], x);
        }

        vector<int> u;

        for(int i=0; i<v.size(); i++) u.push_back(m[v[i]]);

        sort(u.begin(), u.end());

        for(int i=0; i<u.size(); i++) cout << u[i] << " ";
        cout << "\n";
    }
}
