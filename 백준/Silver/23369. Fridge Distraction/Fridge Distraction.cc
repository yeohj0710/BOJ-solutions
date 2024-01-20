#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<char> ans;
    int sum = 0;

    deque<char> d;
    for(int i=1; i<=N; i++) d.push_back(char('a' + i - 1));

    while(true) {
        if(M - sum <= N) {
            vector<char> v;

            for(int i=0; i<M-sum; i++) {
                v.push_back(d.front());
                d.pop_front();
            }

            ans.push_back(v.back());

            break;
        }

        vector<char> v;

        for(int i=0; i<N; i++) {
            v.push_back(d.front());
            d.pop_front();
        }

        for(int i=N-2; i>=0; i--) d.push_front(v[i]);

        ans.push_back(v.back());
        d.push_front(v.back());

        sum += N;
    }

    cout << ans.size() << "\n";

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
