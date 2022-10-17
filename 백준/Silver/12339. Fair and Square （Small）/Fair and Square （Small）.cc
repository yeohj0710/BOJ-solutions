#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> v(1001);

    for(int i=1; i*i<=1000; i++) {
        string a = to_string(i);

        bool check = true;

        for(int j=0; j<a.length(); j++)
            if(a[j] != a[a.length()-j-1]) check = false;

        if(!check) continue;

        string b = to_string(i*i);

        for(int j=0; j<b.length(); j++)
            if(b[j] != b[b.length()-j-1]) check = false;

        if(check) v[i*i] = true;
    }

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int a, b; cin >> a >> b;

        int ans = 0;

        for(int i=a; i<=b; i++)
            if(v[i]) ans++;

        cout << "Case #" <<t << ": " << ans << "\n";
    }
}
