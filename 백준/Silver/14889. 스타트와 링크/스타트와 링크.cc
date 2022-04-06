#include <bits/stdc++.h>
using namespace std;

int N, arr[20][20], ans = INT_MAX;
bool check[20];

void solve(int cnt, int idx) {
    if(idx == N) return;
    if(cnt == N/2) {
        int score1 = 0, score2 = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(check[i] && check[j]) score1 += arr[i][j];
                if(!check[i] && !check[j]) score2 += arr[i][j];
            }
        ans = min(ans, abs(score1 - score2));
        return;
    }

    check[idx] = true; solve(cnt+1, idx+1);
    check[idx] = false; solve(cnt, idx+1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> arr[i][j];
    solve(0, 0);
    cout << ans;
}
