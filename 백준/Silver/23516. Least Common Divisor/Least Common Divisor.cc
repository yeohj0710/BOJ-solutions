#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    vector<string> v;

    for(int i=0; i<a.length(); i++)
        for(int j=i; j<a.length(); j++) {
            if(a.length() % (j-i+1) != 0) continue;

            bool check = true;

            for(int k=0; k<a.length(); k+=(j-i+1))
                if(a.substr(k, j-i+1) != a.substr(0, j-i+1)) check = false;

            if(check) v.push_back(a.substr(0, j-i+1));
        }

    vector<string> u;

    for(int i=0; i<b.length(); i++)
        for(int j=i; j<b.length(); j++) {
            if(b.length() % (j-i+1) != 0) continue;

            bool check = true;

            for(int k=0; k<b.length(); k+=(j-i+1))
                if(b.substr(k, j-i+1) != b.substr(0, j-i+1)) check = false;

            if(check) u.push_back(b.substr(0, j-i+1));
        }

    string ans = "";
    for(int i=0; i<100; i++) ans += '0';

    string tmp = ans;

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<u.size(); j++)
            if(v[i] == u[j] && v[i].length() < ans.length()) ans = v[i];

    if(ans != tmp) cout << ans << "\n";
    else cout << "No solution\n";
}
