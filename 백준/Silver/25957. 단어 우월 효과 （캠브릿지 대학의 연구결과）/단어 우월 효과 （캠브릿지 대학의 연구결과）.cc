#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    unordered_map<string, string> m;

    while(N--) {
        string str; cin >> str;

        if(str.length() < 4) continue;

        string tmp = str.substr(1, str.length()-2);
        sort(tmp.begin(), tmp.end());

        string cvt = "";

        cvt += str.front();
        cvt += tmp;
        cvt += str.back();

        m[cvt] = str;
    }

    int M; cin >> M;

    vector<string> v;

    while(M--) {
        string str; cin >> str;

        if(str.length() < 4) {
            v.push_back(str);
            continue;
        }

        string tmp = str.substr(1, str.length()-2);
        sort(tmp.begin(), tmp.end());

        string cvt = "";

        cvt += str.front();
        cvt += tmp;
        cvt += str.back();

        if(m[cvt] != "") v.push_back(m[cvt]);
        else v.push_back(str);
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}
