#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v;

    for(int i=1; i*i<=1e14; i++) {
        string a = to_string(i);

        bool check = true;

        for(int j=0; j<a.length(); j++)
            if(a[j] != a[a.length()-j-1]) check = false;

        if(!check) continue;

        string b = to_string(i*i);

        for(int j=0; j<b.length(); j++)
            if(b[j] != b[b.length()-j-1]) check = false;

        if(check) v.push_back(i*i);
    }

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int a, b; cin >> a >> b;

        int ans = upper_bound(v.begin(), v.end(), b)
                   - lower_bound(v.begin(), v.end(), a);

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
