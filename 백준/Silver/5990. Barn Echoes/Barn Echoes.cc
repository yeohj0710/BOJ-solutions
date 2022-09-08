#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int ans = 0;

    for(int i=0; i<a.length(); i++)
        for(int j=i; j<a.length(); j++)
            if(b.find(a.substr(i, j-i+1)) < b.length()) ans = max(ans, j-i+1);

    cout << ans << "\n";
}
