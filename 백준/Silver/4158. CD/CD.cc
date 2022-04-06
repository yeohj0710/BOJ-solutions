#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        vector<int> setA(N), setB(M);

        for(int i=0; i<N; i++) cin >> setA[i];
        for(int i=0; i<M; i++) cin >> setB[i];

        sort(setA.begin(), setA.end());
        sort(setB.begin(), setB.end());

        int cnt = 0, i = 0, j = 0;
        while(i < N && j < M) {
            if(setA[i] < setB[j]) i++;
            else if(setA[i] > setB[j]) j++;
            else cnt++, i++, j++;
        }

        cout << cnt << "\n";
    }
}
