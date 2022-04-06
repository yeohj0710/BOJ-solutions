#include <bits/stdc++.h>
using namespace std;

int N, arr[31];
bool dp[31][15001] = {}, check[15001] = {};

void solve(int i, int weight) {
    if(i > N || dp[i][weight]) return;

    dp[i][weight] = true;
    check[weight] = true;

    solve(i+1, weight);
    solve(i+1, weight + arr[i]);
    solve(i+1, abs(weight - arr[i]));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;
    for(int i=0; i<N; i++) cin >> arr[i];

    solve(0, 0);

    int Q; cin >> Q;
    while(Q--) {
        int value; cin >> value;
        if(value <= 15000 && check[value]) cout << "Y ";
        else cout << "N ";
    }
}
