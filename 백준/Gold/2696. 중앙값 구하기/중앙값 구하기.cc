#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        priority_queue<int> qx;
        priority_queue<int, vector<int>, greater<int>> qn;

        vector<int> v;

        for(int i=0; i<N; i++) {
            int x; cin >> x;

            if(qx.size() == qn.size()) qx.push(x);
            else qn.push(x);

            if(!qx.empty() && !qn.empty() && qx.top() > qn.top()) {
                int x = qx.top();
                int y = qn.top();

                qx.pop();
                qn.pop();

                qx.push(y);
                qn.push(x);
            }

            if(i % 2 == 0) v.push_back(qx.top());
        }

        cout << v.size() << "\n";

        for(int i=0; i<v.size(); i++) {
            cout << v[i] << " ";

            if(i % 10 == 9) cout << "\n";
        }

        cout << "\n";
    }
}
