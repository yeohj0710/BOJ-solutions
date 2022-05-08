#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int cnt[1001] = {};
        for(int i=0; i<N; i++) {
            int x; cin >> x;

            cnt[x]++;
        }

        int Max = 0, MaxCnt;
        for(int i=1; i<=1000; i++) {
            if(cnt[i] > Max) {
                Max = cnt[i];
                MaxCnt = i;
            }
        }

        cout << MaxCnt << "\n";
    }
}
