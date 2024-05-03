#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(8);

    while(N--) {
        string s; cin >> s;

        if(s == "red") v[1]++;
        else if(s == "yellow") v[2]++;
        else if(s == "green") v[3]++;
        else if(s == "brown") v[4]++;
        else if(s == "blue") v[5]++;
        else if(s == "pink") v[6]++;
        else if(s == "black") v[7]++;
    }

    int mx = 0;

    for(int i=1; i<=7; i++)
        if(v[i] > 0) mx = i;

    if(mx == 1) {
        cout << 1 << "\n";
        return 0;
    }

    int ans = (mx + 1) * (v[1] + 1) - 1;

    for(int i=2; i<mx; i++) ans += i * v[i];

    cout << ans << "\n";
}
