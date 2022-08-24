#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    stack<int> s;

    while(N--) {
        int x; cin >> x;

        if(!s.empty() && (s.top() + x) % 2 == 0) s.pop();
        else s.push(x);
    }

    cout << s.size() << "\n";
}
