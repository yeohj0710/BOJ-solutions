#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i; j<N; j++) {
            double avg = 0;
            for(int k=i; k<=j; k++) avg += v[k];
            avg /= j-i+1;

            bool check = false;
            for(int k=i; k<=j; k++)
                if(v[k] == avg) check = true;

            if(check) ans++;
        }

    cout << ans << "\n";
}
