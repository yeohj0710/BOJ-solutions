#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;
        cin.ignore();

        string str; getline(cin, str);

        vector<string> v;

        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(tmp == "") tmp += str[i];
            else if(tmp.front() == '#' && str[i] >= 'a' && str[i] <= 'z') {
                v.push_back(tmp);
                tmp = str[i];
            }
            else if(tmp.front() >= 'a' && tmp.front() <= 'z' && str[i] == '#') {
                v.push_back(tmp);
                tmp = str[i];
            }
            else tmp += str[i];
        }
        if(tmp != "") v.push_back(tmp + " ");

        for(int i=v.size()-1; i>=0; i--) cout << v[i];
        cout << "\n";
    }
}
