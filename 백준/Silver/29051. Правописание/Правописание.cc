#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {2, 1, 1, 1, 2, 2, 1, 3, 3, 2, 3, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1};

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<v.size(); j++)
            if(str[i] - 'A' == j) ans += v[j];

    cout << ans << "\n";
}

