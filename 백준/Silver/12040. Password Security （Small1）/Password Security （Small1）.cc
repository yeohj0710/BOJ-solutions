#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mt19937 mt((unsigned int)time(NULL));
    uniform_int_distribution<int> uid(0, INT_MAX);
    auto rd = bind(uid, mt);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        bool found = false;

        for(int r=0; r<1e3; r++) {
            vector<int> u;
            vector<bool> w(26);

            while(u.size() < 26) {
                int x = rd() % 26;

                if(!w[x]) {
                    u.push_back(x);
                    w[x] = true;
                }
            }

            string str = "";

            for(int i=0; i<u.size(); i++) str += char('A' + u[i]);

            bool check = true;

            for(int i=0; i<N; i++)
                if(str.find(v[i]) >= 0 && str.find(v[i]) < str.length()) check = false;

            if(check) {
                cout << "Case #" << t << ": " << str << "\n";

                found = true;
                break;
            }
        }

        if(!found) cout << "Case #" << t << ": IMPOSSIBLE\n";
    }
}
