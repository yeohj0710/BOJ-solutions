#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    stack<int> s;

    while(N--) {
        string str; cin >> str;

        if(str == "push") {
            int x; cin >> x;
            s.push(x);
        }
        else if(str == "pop") {
            if(!s.empty()) {
                cout << s.top() << "\n";
                s.pop();
            }
            else cout << -1 << "\n";
        }
        else if(str == "size") cout << s.size() << "\n";
        else if(str == "empty") {
            if(s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(str == "top") {
            if(!s.empty()) cout << s.top() << "\n";
            else cout << -1 << "\n";
        }
    }
}
