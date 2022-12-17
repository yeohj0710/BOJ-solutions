#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b, c, d, N; cin >> a >> b >> c >> d >> N;

    int cnt = 0, Min = INT_MAX;

    for(int i=0; i*a<=N; i++)
        for(int j=0; i*a+j*b<=N; j++)
            for(int k=0; i*a+j*b+k*c<=N; k++)
                for(int l=0; i*a+j*b+k*c+l*d<=N; l++) {
                    if(i*a+j*b+k*c+l*d != N) continue;

                    cout << "# of PINK is " << i << " # of GREEN is " << j << " ";
                    cout << "# of RED is " << k << " # of ORANGE is " << l << "\n";

                    cnt++;

                    Min = min(Min, i+j+k+l);
                }

    cout << "Total combinations is " << cnt << ".\n";
    cout << "Minimum number of tickets to print is " << Min << ".\n";
}
