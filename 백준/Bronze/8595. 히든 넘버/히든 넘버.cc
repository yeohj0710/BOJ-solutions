#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;
    string tmp = "";
    int ans = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            if(tmp == "" || (tmp.back() >= '0' && tmp.back() <= '9')) tmp += str[i];
            else tmp = str[i];
        }
        else {
            if(tmp != "") ans += stoi(tmp);
            tmp = "";
        }
    }
    if(tmp != "" && (tmp.back() >= '0' && tmp.back() <= '9')) ans += stoi(tmp);

    cout << ans << "\n";
}
