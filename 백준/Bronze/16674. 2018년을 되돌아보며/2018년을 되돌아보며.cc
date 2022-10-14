#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> v(4);
    int etc = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '2') v[0]++;
        else if(str[i] == '0') v[1]++;
        else if(str[i] == '1') v[2]++;
        else if(str[i] == '8') v[3]++;
        else etc++;
    }

    if(etc > 0) cout << 0 << "\n";
    else {
        if(v[0] == 0 || v[1] == 0 || v[2] == 0 || v[3] == 0) cout << 1 << "\n";
        else {
            if(v[0] == v[1] && v[1] == v[2] && v[2] == v[3]) cout << 8 << "\n";
            else cout << 2 << "\n";
        }
    }
}
