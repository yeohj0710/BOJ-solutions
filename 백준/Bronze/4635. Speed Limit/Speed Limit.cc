#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == -1) break;

        int sum = 0, total = 0;
        for(int i=0; i<N; i++) {
            int a, b; cin >> a >> b;
            sum += a * (b - total);
            total = b;
        }

        cout << sum << " miles\n";
    }
}
