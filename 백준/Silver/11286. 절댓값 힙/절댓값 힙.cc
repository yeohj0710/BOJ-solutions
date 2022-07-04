#include <bits/stdc++.h>
#define int long long
using namespace std;

struct cmp {
    bool operator()(int a, int b) {
        if(abs(a) != abs(b)) return abs(a) > abs(b);
        else return a > b;
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    priority_queue<int, vector<int>, cmp> pq;

    int N; cin >> N;

    while(N--) {
        int x; cin >> x;

        if(x != 0) pq.push(x);
        else {
            if(pq.empty()) cout << 0 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}
