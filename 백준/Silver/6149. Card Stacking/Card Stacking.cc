#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    queue<int> q;
    for(int i=1; i<=M; i++) q.push(i);

    vector<int> v;

    while(!q.empty()) {
        for(int i=0; i<N; i++) {
            if(i == N-1) v.push_back(q.front());

            q.pop();
            if(q.empty()) break;

            for(int j=0; j<K; j++) {
                int x = q.front();
                q.pop();
                q.push(x);
            }
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
