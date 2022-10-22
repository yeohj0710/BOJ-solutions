#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> v(str.length());
    for(int i=0; i<v.size(); i++) v[i] = i;

    vector<string> u;

    while(true) {
        string tmp = "";

        for(int i=0; i<v.size(); i++) tmp += str[v[i]];

        bool check = true;

        for(int i=0; i<tmp.length(); i++) {
            if((tmp[i] >= 'A' && tmp[i] <= 'Z') && (str[i] >= '0' && str[i] <= '9')) check = false;
            if((tmp[i] >= '0' && tmp[i] <= '9') && (str[i] >= 'A' && str[i] <= 'Z')) check = false;
        }

        if(check) u.push_back(tmp);

        if(!next_permutation(v.begin(), v.end())) break;
    }

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    cout << u.size() << "\n";
    for(int i=0; i<u.size(); i++) cout << u[i] << "\n";
}
