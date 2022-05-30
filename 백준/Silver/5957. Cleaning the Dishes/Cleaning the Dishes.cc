#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    stack<int> a, b, c;
    for(int i=N; i>=1; i--) a.push(i);

    while(c.size() != N) {
        int x, y; cin >> x >> y;

        if(x == 1) {
            while(y--) {
                b.push(a.top());
                a.pop();
            }
        }
        else {
            while(y--) {
                c.push(b.top());
                b.pop();
            }
        }
    }

    while(!c.empty()) {
        cout << c.top() << "\n";
        c.pop();
    }
}
