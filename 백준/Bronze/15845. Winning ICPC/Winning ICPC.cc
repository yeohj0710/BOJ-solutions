#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> lim(M);
    for(int i=0; i<M; i++) cin >> lim[i];

    vector<int> score(N);
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int x; cin >> x;

            if(x >= lim[j]) score[i]++;
        }

    int Max = 0;
    for(int i=0; i<N; i++) Max = max(Max, score[i]);

    for(int i=0; i<N; i++)
        if(score[i] == Max) {
            cout << i + 1 << "\n";
            break;
        }
}
