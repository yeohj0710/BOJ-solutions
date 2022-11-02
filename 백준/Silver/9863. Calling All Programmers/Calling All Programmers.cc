#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M, K; cin >> N >> M >> K;
        if(N == 0 && M == 0 && K == 0) break;

        queue<int> q;

        for(int i=1; i<=N; i++) q.push(i);

        for(int i=1; i<=K; i++) {
            for(int j=1; j<=M-1; j++) {
                int x = q.front();

                q.pop();
                q.push(x);
            }

            if(i < K) q.pop();
            else cout << q.front() << "\n";
        }

    }
}
