#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; string str; cin >> N >> M >> str;

    deque<int> d;

    for(int i=0; i<N; i++) d.push_back(i);

    for(int i=0; i<str.length()-1; i++) {
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

    for(int i=0; i<M-1; i++) d.pop_front();

    for(int i=0; i<3; i++) {
        cout << d.front() << " ";

        d.pop_front();
    }
    cout << "\n";
}
