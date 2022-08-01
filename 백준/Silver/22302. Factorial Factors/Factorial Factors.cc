#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> p(1e5, true);
    p[1] = false;

    for(int i=2; i*i<1e5; i++)
        for(int j=2; i*j<1e5; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<1e5; i++)
        if(p[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int a = 0, b = 0;

        vector<bool> vis(N+1);

        for(int i=0; i<v.size() && v[i] <= N; i++) a++;

        for(int i=0; i<v.size() && v[i] <= N; i++) {
            int temp = v[i];

            while(temp <= N) {
                b += N / temp;

                temp *= v[i];
            }
        }

        cout << a << " " << b << "\n";
    }
}
