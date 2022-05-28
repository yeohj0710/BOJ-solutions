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
            bool check = true;

            for(int k=i; k<=j-1; k++)
                if(v[k] == v[k+1]) check = false;

            for(int k=i; k<=j-2; k++) {
                if(v[k] <= v[k+1] && v[k+1] <= v[k+2]) check = false;
                else if(v[k] >= v[k+1] && v[k+1] >= v[k+2]) check = false;
            }

            if(check) ans++;
        }

    cout << ans << "\n";
}
