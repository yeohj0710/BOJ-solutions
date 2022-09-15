#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<bool> v(str.length());
    for(int i=0; i<v.size(); i++) {
        if(str[i] == 'U') v[i] = true;
        else v[i] = false;
    }

    int cnt = 0;
    bool cur = v[0];

    for(int i=1; i<v.size(); i++) {
        if(v[i] != cur) cnt++, cur = !cur;

        if(!v[i]) cnt++, cur = !cur;
    }

    cout << cnt << "\n";

    cnt = 0;
    cur = v[0];

    for(int i=1; i<v.size(); i++) {
        if(v[i] != cur) cnt++, cur = !cur;

        if(v[i]) cnt++, cur = !cur;
    }

    cout << cnt << "\n";

    cnt = 0;

    for(int i=1; i<v.size(); i++)
        if(v[i] != v[i-1]) cnt++;

    cout << cnt << "\n";
}
