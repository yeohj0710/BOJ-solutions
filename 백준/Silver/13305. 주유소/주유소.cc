#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> dist(N);
    for(int i=0; i<N-1; i++) cin >> dist[i];

    priority_queue<long long, vector<long long>, greater<long long>> cost;
    long long ans = 0;
    for(int i=0; i<N; i++) {
        long long val; cin >> val;
        cost.push(val);
        ans += cost.top() * dist[i];
    }
    cout << ans;
}
