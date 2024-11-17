#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<string> split(string str, string sep) {
    vector<string> v;
    int x = 0, y = str.find(sep);

    while(y != -1) {
        v.push_back(str.substr(x, y - x));
        x = y + sep.length();
        y = str.find(sep, x);
    }
    v.push_back(str.substr(x));

    return v;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    vector<string> v = split(s, "+");

    if(v.size() != 2) {
        cout << "No Money\n";
        return 0;
    }

    if(v[0] != v[1]) {
        cout << "No Money\n";
        return 0;
    }

    if(v[0].length() == 0) {
        cout << "No Money\n";
        return 0;
    }

    if(v[0][0] == '0') {
        cout << "No Money\n";
        return 0;
    }

    bool chk = true;

    for(int i=0; i<v[0].length(); i++) {
        if(!(v[0][i] >= '0' && v[0][i] <= '9')) chk = false;
    }

    if(!chk) {
        cout << "No Money\n";
        return 0;
    }

    int x = stoll(v[0]);

    if(x >= 0) cout << "CUTE\n";
    else cout << "No Money\n";
}
