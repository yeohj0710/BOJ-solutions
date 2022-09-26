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

        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= '0' && str[i] <= '9') tmp += str[i];
            else if(tmp != "") {
                v.push_back(tmp);
                tmp = "";
            }
        }

        if(tmp != "") {
            while(tmp[0] == '0' && tmp.length() >= 2) tmp = tmp.substr(1, tmp.length()-1);

            v.push_back(tmp);
            tmp = "";
        }
    }

    int Max = 0;

    for(int i=0; i<v.size(); i++) Max = max(Max, (int)v[i].length());

    for(int i=0; i<v.size(); i++)
        while(v[i].length() < Max) v[i] = '0' + v[i];

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) {
        while(v[i][0] == '0' && v[i].length() >= 2) v[i] = v[i].substr(1, v[i].length()-1);

        cout << v[i] << "\n";
    }
}
