#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0, ans;

    for(int i=2; i<=N; i++) {
        int temp = N, sum = 0;

        while(temp > 0) {
            sum += temp % i;
            temp /= i;
        }

        if(sum > Max) {
            Max = sum;
            ans = i;
        }
    }

    cout << Max << " " << ans << "\n";
}
