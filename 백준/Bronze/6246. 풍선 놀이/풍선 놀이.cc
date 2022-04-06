#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    vector<bool> check(N+1);

    while(M--) {
        int a, b; cin >> a >> b;
        for(int i=a; i<=N; i+=b) check[i] = true;
    }

    int cnt = 0;
    for(int i=1; i<=N; i++)
        if(check[i]) cnt++;

    cout << N - cnt;
}
