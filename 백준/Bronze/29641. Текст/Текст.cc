#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<string> v;
    string s;

    while(cin >> s) {
        v.push_back(s);
    }

    int x = 0;

    for(int i=0; i<v.size(); i++) {
        if(x == 0) {
            cout << v[i];
            x += v[i].length();
        }
        else {
            if(x + 1 + v[i].length() <= n) {
                cout << " " << v[i];
                x += v[i].length() + 1;
            }
            else {
                cout << "\n";
                x = 0;

                cout << v[i];
                x = v[i].length();
            }
        }
    }
    cout << "\n";
}
