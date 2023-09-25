#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    stack<int> s, ss;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'f') s.push(-1);
        else if(str[i] == 'g') s.push(-2);
        else s.push(0);
    }

    while(!s.empty()) {
        if(s.top() >= 0) {
            ss.push(s.top());
            s.pop();
            continue;
        }

        if(s.top() == -1) {
            if(ss.size() < 2) {
                cout << -1 << "\n";
                return 0;
            }

            s.pop();

            int x = ss.top(); ss.pop();
            int y = ss.top(); ss.pop();

            ss.push(min(x, y));

            continue;
        }

        if(s.top() == -2) {
            if(ss.empty()) {
                cout << -1 << "\n";
                return 0;
            }

            s.pop();

            int x = ss.top(); ss.pop();

            ss.push(x + 1);

            continue;
        }
    }

    if(!s.empty() || ss.empty() || ss.size() > 1) {
        cout << -1 << "\n";
        return 0;
    }

    cout << ss.top() << "\n";
}

