#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int card[101][2];
    bool curr[100] = {};

    for(int i=0; i<N; i++) cin >> card[i][0] >> card[i][1];

    while(M--) {
        int value; cin >> value;

        for(int i=0; i<N; i++)
            if(card[i][curr[i]] <= value) curr[i] = !curr[i];
    }

    int sum = 0;
    for(int i=0; i<N; i++) sum += card[i][curr[i]];

    cout << sum;
}
