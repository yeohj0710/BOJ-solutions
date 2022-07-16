#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int v[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum = 0, ans = 0;

    for(int i=2019; i<=N; i++) {
        if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) v[1] = 29;
        else v[1] = 28;

        for(int j=0; j<12; j++) {
            if((sum + 13) % 7 == 4) ans++;

            sum += v[j];
        }
    }

    cout << ans << "\n";
}
