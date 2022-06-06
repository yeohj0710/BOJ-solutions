#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        vector<string> v;
        v.push_back(str);

        while(true) {
            cin >> str;
            if(str == "#") break;

            v.push_back(str);
        }

        string pre = v[0];
        bool check = true;

        for(int i=1; i<v.size(); i++) {
            if(pre.length() != v[i].length()) {
                check = false;
                break;
            }

            int cnt = 0;
            for(int j=0; j<v[i].size(); j++)
                if(pre[j] != v[i][j]) cnt++;

            if(cnt != 1) {
                check = false;
                break;
            }

            pre = v[i];
        }

        if(check) cout << "Correct\n";
        else cout << "Incorrect\n";
    }
}
