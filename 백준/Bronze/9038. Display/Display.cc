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
        string s = "";

        for(int i=0; i<str.length(); i++) {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) s += str[i];
            else {
                bool check = false;
                for(int j=0; j<s.length(); j++)
                    if((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z')) check = true;
                if(!check) {
                    s = "";
                    continue;
                }

                v.push_back(s);
                s = "";
            }
        }

        bool check = false;
        for(int j=0; j<s.length(); j++)
            if((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z')) check = true;
        if(check) v.push_back(s);

        if(v.size() == 0) {
            cout << 0 << "\n";
            continue;
        }

        int ans = 1, sum = 0;
        for(int i=0; i<v.size(); i++) {
            if(sum + (v[i].length() + 1) > N + 1) {
                ans++;
                sum = v[i].length() + 1;
            }
            else sum += v[i].length() + 1;
        }

        cout << ans << "\n";
    }
}
