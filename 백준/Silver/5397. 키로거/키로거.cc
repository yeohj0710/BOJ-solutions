#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        stack<char> s, ss;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '<') {
                if(!s.empty()) {
                    ss.push(s.top());
                    s.pop();
                }
            }
            else if(str[i] == '>') {
                if(!ss.empty()) {
                    s.push(ss.top());
                    ss.pop();
                }
            }
            else if(str[i] == '-') {
                if(!s.empty()) s.pop();
            }
            else s.push(str[i]);
        }

        while(!s.empty()) {
            ss.push(s.top());
            s.pop();
        }

        while(!ss.empty()) {
            cout << ss.top();
            ss.pop();
        }

        cout << "\n";
    }
}
