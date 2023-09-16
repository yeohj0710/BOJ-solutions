#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    queue<pair<string, int>> q;

    for(int i=0; i<N; i++) {
        string str; int x; cin >> str >> x;

        q.push({str, x});
    }

    while(q.size() > 1) {
        string str = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i=0; i<x-1; i++) {
            q.push(q.front());
            q.pop();
        }

        q.pop();
    }

    cout << q.front().first << "\n";
}
