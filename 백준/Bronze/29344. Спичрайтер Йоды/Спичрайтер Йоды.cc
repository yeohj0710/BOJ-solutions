#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v;
    string str;

    while(cin >> str) {
        if(str.back() == '.') {
            v.push_back(str.substr(0, str.length() - 1));

            for(int i=v.size()-1; i>0; i--) cout << v[i] << " ";

            cout << v[0] << ". ";

            v.clear();
        }
        else v.push_back(str);
    }
}
