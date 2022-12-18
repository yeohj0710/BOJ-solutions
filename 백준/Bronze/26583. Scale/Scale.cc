#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str;

    while(getline(cin, str)) {
        vector<int> v;
        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                if(tmp != "") v.push_back(stoi(tmp));
                tmp = "";
            }
            else tmp += str[i];
        }
        if(tmp != "") v.push_back(stoi(tmp));

        for(int i=0; i<v.size(); i++) {
            int ans = v[i];

            if(i > 0) ans *= v[i-1];
            if(i < v.size()-1) ans *= v[i+1];

            cout << ans << " ";
        }
        cout << "\n";
    }
}
