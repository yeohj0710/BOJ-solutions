#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=1; i<=str.length(); i++) {
        if(str.length() % i != 0) continue;

        vector<string> v;

        for(int j=0; j<str.length(); j+=i)
            v.push_back(str.substr(j, i));

        bool check = true;

        string tmp = v[0];

        for(int j=1; j<v.size(); j++) {
            tmp = tmp.back() + tmp.substr(0, tmp.length()-1);

            if(tmp != v[j]) check = false;
        }

        if(check) {
            cout << i << "\n";
            break;
        }
    }
}
