#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;

    while(N--) {
        string str; cin >> str;

        if(str.length() != 8) continue;

        if(!(str[0] == str[1] && str[0] >= '1' && str[0] <= '9')) continue;

        if(!(str[2] >= '1' && str[2] <= '9' && str[3] >= '1' && str[3] <= '9')) continue;

        if(!(str[4] >= 'A' && str[4] <= 'Z')) continue;

        if(!(str[5] >= '1' && str[5] <= '9')) continue;
        if(!(str[6] >= '1' && str[6] <= '9')) continue;
        if(!(str[7] >= '1' && str[7] <= '9')) continue;

        v.push_back(str);
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
