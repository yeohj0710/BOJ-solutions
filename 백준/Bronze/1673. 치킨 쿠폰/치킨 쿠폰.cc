#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K;

    while(cin >> N >> K) {
        int ans = N;

        while(N >= K) {
            ans += N/K;
            N = N/K + N%K;
        }

        cout << ans << "\n";
    }
}
