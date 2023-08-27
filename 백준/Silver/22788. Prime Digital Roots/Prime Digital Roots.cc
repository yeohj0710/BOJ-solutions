#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int Max = 1e6 + 1;

    vector<bool> isp(Max, true);
    isp[0] = isp[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) isp[i*j] = false;

    vector<int> p;
    for(int i=2; i<Max; i++)
        if(isp[i]) p.push_back(i);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        string s1 = to_string(N);

        while(s1.length() < 7) s1 = " " + s1;

        int ans = -1;

        while(true) {
            if(isp[N]) {
                ans = N;
                break;
            }
            else if(N < 10) break;

            int M = 0;

            while(N > 0) {
                M += N % 10;
                N /= 10;
            }

            N = M;
        }

        string s2 = to_string(ans);

        if(s2 == "-1") s2 = "none";

        while(s2.length() < 7) s2 = " " + s2;

        cout << s1 << " " << s2 << "\n";
    }
}
