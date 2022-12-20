#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(2);

    int T; cin >> T;

    while(T--) {
        string str; int N;
        cin >> str >> N; cin.ignore();

        cout << str << "\n";

        while(N--) {
            string s; getline(cin, s);

            vector<string> v;
            string tmp = "";

            for(int i=0; i<s.length(); i++) {
                if(s[i] == ' ') {
                    if(tmp != "") v.push_back(tmp);
                    tmp = "";
                }
                else tmp += s[i];
            }
            if(tmp != "") v.push_back(tmp);

            if(v.size() != str.length()) continue;

            bool check = true;

            for(int i=0; i<v.size(); i++)
                if(v[i][0] != str[i]) check = false;

            if(check) cout << s << "\n";
        }
    }
}
