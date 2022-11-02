#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int Min = INT_MAX, Max = INT_MIN;

        for(int i=0; i<N-M+1; i++) {
            int avg = 0;

            for(int j=i; j<i+M; j++) avg += v[j];

            avg /= M;

            Min = min(Min, avg);
            Max = max(Max, avg);
        }

        cout << "Data Set " << t << ":\n";
        cout << Max - Min << "\n";
        cout << "\n";
    }
}
