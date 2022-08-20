#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    multiset<string> s;

    while(N--) {
        string str; cin >> str;

        s.insert(str);
    }

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        vector<string> v;

        while(true) {
            string str; cin >> str;
            if(str == "-1") break;

            if(s.count(str) == 0) v.push_back(str);
        }

        if(v.size() == 0) {
            cout << "Email " << t << " is spelled correctly.\n";
        }
        else {
            cout << "Email " << t << " is not spelled correctly.\n";

            for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
        }
    }

    cout << "End of Output\n";
}
