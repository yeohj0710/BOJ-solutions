#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int ans = 0;

    for(int i=0; i<a.length()-b.length()+1; i++) {
        string tmp = a.substr(i, b.length());

        bool check = false;

        for(int j=0; j<tmp.length(); j++)
            if(tmp[j] == b[j]) check = true;

        if(!check) ans++;
    }

    cout << ans << "\n";
}
