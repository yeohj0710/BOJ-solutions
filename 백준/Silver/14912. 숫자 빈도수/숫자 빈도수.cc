#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int ans = 0;
    for(int i=1; i<=N; i++) {
        int temp = i;

        while(temp > 0) {
            if(temp % 10 == K) ans++;
            temp /= 10;
        }
    }

    cout << ans << "\n";
}
