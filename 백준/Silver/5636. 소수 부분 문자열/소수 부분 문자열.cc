#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e5 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    while(true) {
        string str; cin >> str;
        if(str == "0") break;

        int ans = 0;

        for(int i=0; i<str.length(); i++)
            for(int j=1; j<=5 && i-1+j<str.length(); j++) {
                int x = stoi(str.substr(i, j));
                if(p[x]) ans = max(ans, x);
            }

        cout << ans << "\n";
    }
}
