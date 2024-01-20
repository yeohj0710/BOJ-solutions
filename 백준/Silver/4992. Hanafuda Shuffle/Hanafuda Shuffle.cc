#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        stack<int> s;

        for(int i=1; i<=N; i++) s.push(i);

        while(M--) {
            int a, b; cin >> a >> b;

            stack<int> s1, s2;

            for(int i=0; i<a-1; i++) {
                s1.push(s.top());
                s.pop();
            }

            for(int i=0; i<b; i++) {
                s2.push(s.top());
                s.pop();
            }

            while(s1.size() > 0) {
                s.push(s1.top());
                s1.pop();
            }

            while(s2.size() > 0) {
                s.push(s2.top());
                s2.pop();
            }
        }

        cout << s.top() << "\n";
    }
}
