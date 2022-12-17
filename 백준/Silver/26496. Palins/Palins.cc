#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str;

    while(cin >> str) {
        unordered_map<string, bool> m;
        vector<string> v;

        for(int i=1; i<=str.length(); i++)
            for(int j=0; j<str.length(); j++) {
                if(j+i-1 >= str.length()) continue;

                string tmp = str.substr(j, i);

                bool check = true;

                for(int k=0; k<tmp.length()/2; k++)
                    if(tmp[k] != tmp[tmp.length()-1-k]) check = false;

                if(check) {
                    if(!m[tmp]) v.push_back(tmp);

                    m[tmp] = true;
                }
            }

        cout << v.size() << " - ";

        for(int i=0; i<v.size(); i++)
            cout << "\"" << v[i] << "\" ";

        cout << "\n";
    }
}
