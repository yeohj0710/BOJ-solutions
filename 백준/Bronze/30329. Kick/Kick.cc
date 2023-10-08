#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int cnt = 0;

    for(int i=0; i<str.length()-3; i++)
        if(str.substr(i, 4) == "kick") cnt++;

    cout << cnt << "\n";
}
