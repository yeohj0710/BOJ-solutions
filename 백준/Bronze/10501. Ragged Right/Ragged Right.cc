#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v;
    string str;

    while(getline(cin, str)) {
        v.push_back(str.length());
    }

    int Max = 0;

    for(int i=0; i<v.size(); i++) Max = max(Max, v[i]);

    int ans = 0;

    for(int i=0; i<v.size()-1; i++) ans += pow(Max - v[i], 2);

    cout << ans << "\n";
}
