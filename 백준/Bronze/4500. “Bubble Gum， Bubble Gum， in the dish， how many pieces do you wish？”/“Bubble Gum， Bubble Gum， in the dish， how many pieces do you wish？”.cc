#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        vector<string> v;

        int prev = 0;
        for(int i=0; i<str.length(); i++)
            if(str[i] == ' ') {
                v.push_back(str.substr(prev, i-prev));
                prev = i + 1;
            }
        v.push_back(str.substr(prev, str.length()-prev));

        string name; cin >> name;
        cin.ignore();

        int start;
        for(int i=0; i<v.size(); i++)
            if(v[i] == name) start = i;

        int N; cin >> N;
        cin.ignore();

        cout << v[(N + start - 1) % v.size()] << "\n";
    }
}
