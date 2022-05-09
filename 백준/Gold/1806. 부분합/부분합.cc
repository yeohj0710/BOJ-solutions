#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, S; cin >> N >> S;

    vector<int> sum(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        sum[i] = sum[i-1] + x;
    }

    int i = 0, j = 0;
    int sec = INT_MAX;

    while(i <= j && j <= N) {
        int part = sum[j] - sum[i];

        if(part >= S) {
            sec = min(sec, j - i);
            i++;
        }
        else j++;
    }

    if(sec != INT_MAX) cout << sec << "\n";
    else cout << 0 << "\n";
}

