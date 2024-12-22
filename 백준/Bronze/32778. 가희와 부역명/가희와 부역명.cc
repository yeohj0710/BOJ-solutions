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

    string s; getline(cin, s);

    vector<string> v = split(s, "(");

    cout << v[0] << "\n";

    if(v.size() == 1) {
        cout << "-\n";
        return 0;
    }

    cout << v[1].substr(0, v[1].length()-1) << "\n";
}
