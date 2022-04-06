#include <bits/stdc++.h>
using namespace std;

bool comp[300000] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; i*i<=250000; i++)
        for(int j=2; i*j<=250000; j++) comp[i*j] = true;

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int cnt = 0;
        for(int i=N+1; i<=N*2; i++)
            if(!comp[i]) cnt++;
        cout << cnt << "\n";
    }
}
