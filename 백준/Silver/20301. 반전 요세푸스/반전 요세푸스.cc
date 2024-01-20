#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    deque<int> d;

    for(int i=1; i<=N; i++) d.push_back(i);

    int cnt = 0, sz = 0;
    bool chk = true;

    while(d.size() > 0) {
        if(chk) {
            int x = d.front();

            d.pop_front();
            cnt++;

            if(cnt % M != 0) d.push_back(x);
            else {
                cout << x << "\n";

                sz++;

                if(sz % K == 0) chk = !chk;
            }
        }
        else {
            int x = d.back();

            d.pop_back();
            cnt++;

            if(cnt % M != 0) d.push_front(x);
            else {
                cout << x << "\n";

                sz++;

                if(sz % K== 0) chk = !chk;
            }
        }
    }
}
