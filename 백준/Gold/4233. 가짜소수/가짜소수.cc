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

    while(true) {
        int N, a; cin >> N >> a;
        if(N == 0 && a == 0) break;

        bool check = true;

        for(int i=0; i<v.size() && v[i]*v[i] <= N; i++) {
            if(N % v[i] == 0) check = false;
        }

        if(check) {
            cout << "no\n";
            continue;
        }

        int mul = 1, bas = a, exp = N;

        while(exp > 0) {
            if(exp % 2 == 1) mul = (mul * bas) % N;

            bas = (bas * bas) % N;
            exp /= 2;
        }

        if(mul == a) cout << "yes\n";
        else cout << "no\n";
    }
}
