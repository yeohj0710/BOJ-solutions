#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> order(K);
    for(int i=0; i<K; i++) cin >> order[i];

    int ans = 0;
    vector<int> now(N);

    for(int i=0; i<K; i++) {
        bool check = false;
        for(int j=0; j<N; j++)
            if(now[j] == order[i]) check = true;
        if(check) continue;

        for(int j=0; j<N; j++)
            if(now[j] == 0) {
                now[j] = order[i];
                check = true;
                break;
            }
        if(check) continue;

        int lastMax = -1, change;
        for(int j=0; j<N; j++) {
            int last = 0;
            for(int k=i+1; k<K; k++) {
                if(now[j] == order[k]) break;
                last++;
            }

            if(last > lastMax) {
                change = j;
                lastMax = last;
            }
        }
        now[change] = order[i];
        ans++;
    }

    cout << ans;
}
