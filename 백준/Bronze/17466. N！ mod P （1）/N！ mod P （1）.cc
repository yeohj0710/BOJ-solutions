#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, P; cin >> N >> P;

    long long ans = 1;
    for(int i=1; i<=N; i++) ans = (ans * i) % P;

    cout << ans;
}
