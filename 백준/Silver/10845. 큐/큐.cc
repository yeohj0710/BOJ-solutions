#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    queue<int> q;

    while(N--) {
        string str; cin >> str;

        if(str == "push") {
            int x; cin >> x;
            q.push(x);
        }
        else if(str == "pop") {
            if(!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else cout << -1 << "\n";
        }
        else if(str == "size") cout << q.size() << "\n";
        else if(str == "empty") {
            if(q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(str == "front") {
            if(!q.empty()) cout << q.front() << "\n";
            else cout << -1 << "\n";
        }
        else if(str == "back") {
            if(!q.empty()) cout << q.back() << "\n";
            else cout << -1 << "\n";
        }
    }
}
