#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    deque<int> d;

    for(int i=1; i<=N; i++) d.push_back(i);

    string str; cin >> str;

    for(int i=0; i<M; i++) {
        if(str[i] == 'A') {
            int x = d.front(); d.pop_front();

            d.push_back(x);
        }
        else {
            int x = d.front(); d.pop_front();
            int y = d.front(); d.pop_front();

            d.push_back(y);
            d.push_front(x);
        }
    }

    cout << d.front() << "\n";
}
