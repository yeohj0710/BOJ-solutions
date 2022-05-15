#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        vector<string> v;

        for(int i=0; i<str.length(); i++) {
            str = str[str.length()-1] + str.substr(0, str.length()-1);

            v.push_back(str);
        }

        sort(v.begin(), v.end());

        cout << v[0] << "\n";
    }
}
