#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e5;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int N; cin >> N;

    if(N == 1) {
        cout << "no\n";
        return 0;
    }

    for(int i=0; i<v.size() && v[i]*v[i] <= N; i++) {
        if(N % v[i] == 0) {
            int temp = N;

            while(temp % v[i] == 0) {
                temp /= v[i];
            }

            if(temp == 1) cout << "yes\n";
            else cout << "no\n";

            return 0;
        }
    }

    cout << "yes\n";
}
