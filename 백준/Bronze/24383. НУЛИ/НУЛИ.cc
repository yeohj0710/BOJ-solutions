#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> v;

    int cnt = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '0') cnt++;
        else if(str[i] == '1') {
            if(cnt == 0) continue;
            else {
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }
    if(cnt > 0) v.push_back(cnt);

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << "\n";
}
