#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 2e6;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int a, b; cin >> a >> b;

    string str; cin >> str;

    int ans = 0;

    for(int i=a-1; i<b; i++) {
        string num = to_string(v[i]);

        if(str.length() > num.length()) continue;

        bool check = false;

        for(int j=0; j<num.length()-str.length()+1; j++)
            if(num.substr(j, str.length()) == str) check = true;

        if(check) ans++;
    }

    cout << ans << "\n";
}
