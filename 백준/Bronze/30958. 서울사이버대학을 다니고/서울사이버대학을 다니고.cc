#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N; cin.ignore();

    string str; getline(cin, str);

    unordered_map<char, int> m;
    int mx = 0;

    for(int i=0; i<str.length(); i++) {
        m[str[i]]++;

        if(str[i] >= 'a' && str[i] <= 'z' && m[str[i]] > mx) mx = m[str[i]];
    }

    cout << mx << "\n";
}
