#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    string str = "";

    while(a > 0) {
        str = char('0' + a % b) + str;

        a /= b;
    }

    vector<int> v;
    string tmp = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] != '0') tmp += str[i];
        else if(tmp != "") {
            v.push_back(stoll(tmp));
            tmp = "";
        }
    }
    if(tmp != "") {
        v.push_back(stoll(tmp));
        tmp = "";
    }

    int sum = 0;

    for(int i=0; i<v.size(); i++) sum += v[i];

    string ans = "";

    while(sum > 0) {
        ans = char('0' + sum % b) + ans;

        sum /= b;
    }

    cout << ans << "\n";
}
