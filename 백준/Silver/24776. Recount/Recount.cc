#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    map<string, int> m;
    vector<string> v;

    while(true) {
        string str; getline(cin, str);
        if(str == "***") break;

        m[str]++;
        v.push_back(str);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int Max = 0;
    for(int i=0; i<v.size(); i++) Max = max(Max, m[v[i]]);

    int cnt = 0;
    for(int i=0; i<v.size(); i++)
        if(m[v[i]] == Max) cnt++;

    if(cnt >= 2) cout << "Runoff!\n";
    else {
        for(int i=0; i<v.size(); i++)
            if(m[v[i]] == Max) cout << v[i] << "\n";
    }
}
