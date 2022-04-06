#include <bits/stdc++.h>
using namespace std;

int cnt(int N, int div) {
    int ret = 0;
    while(div <= N) {
        ret += N/div;
        N /= div;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    int two = cnt(N, 2) - cnt(N-M, 2) - cnt(M, 2);
    int five = cnt(N, 5) - cnt(N-M, 5) - cnt(M, 5);

    if(two < five) cout << two;
    else cout << five;
}
