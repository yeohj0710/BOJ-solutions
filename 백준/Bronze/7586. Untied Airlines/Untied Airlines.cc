#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string a; cin >> a;
        if(a == "#") break;

        vector<string> v;
        map<string, int> m;

        while(true) {
            string b; cin >> b;
            if(b == "00A") break;

            string c; cin >> c;

            if(m[b] != 0) v.push_back(b);

            if(c == "L") m[b] += 120;
            else if(c == "S") m[b] += 150;
            else if(c == "B") m[b] += 150;
            else if(c == "N") m[b] += 40;
            else if(c == "C") m[b] += 160;
            else if(c == "D") m[b] += 100;
            else if(c == "R") m[b] += 100;
            else if(c == "O") m[b] += 100;
        }

        int ans = 0;

        for(int i=0; i<v.size(); i++)
            if(m[v[i]] >= 200) ans++;

        cout << a << " " << ans << "\n";
    }
}
