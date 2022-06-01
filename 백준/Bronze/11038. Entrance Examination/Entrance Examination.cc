#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, a, b; cin >> N >> a >> b;
        if(N == 0 && a == 0 && b == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int Max = 0, ans;
        for(int i=a; i<=b; i++)
            if(v[i-1] - v[i] >= Max) {
                Max = v[i-1] - v[i];
                ans = i;
            }

        cout << ans << "\n";
    }
}
