#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    vector<string> v;

    for(int i=0; i<(1<<n); i++) {
        v.push_back(bitset<64>(i).to_string().substr(64 - n));
    }

    sort(v.begin(), v.end(), [](string a, string b) {
        int x = 0, y = 0;

        for(int i=0; i<a.length(); i++)
            if(a[i] == '1') x++;

        for(int i=0; i<b.length(); i++)
            if(b[i] == '1') y++;

        if(x != y) return x < y;

        string aa = a, bb = b;

        reverse(aa.begin(), aa.end());
        reverse(bb.begin(), bb.end());

        return aa < bb;
    });

    for(int i=0; i<v.size(); i++)
        if(v[i] == s) {
            cout << i << "\n";
            break;
        }
}
