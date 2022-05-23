#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<bool> p(4000001, true);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; i*i<=4000000; i++)
        for(int j=2; i*j<=4000000; j++) p[i*j] = false;

    int a, b, d; cin >> a >> b >> d;

    int ans = 0;
    for(int i=a; i<=b; i++) {
        string str = to_string(i);

        bool check = false;
        for(int j=0; j<str.length(); j++)
            if(str[j] == char('0' + d)) check = true;

        if(!check) continue;

        if(p[i]) ans++;
    }

    cout << ans << "\n";
}
