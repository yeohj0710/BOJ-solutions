#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e5 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    while(true) {
        int N, a, b; cin >> N >> a >> b;
        if(N == 0 && a == 0 && b == 0) break;

        int Max = 0, p, q;

        for(int i=0; i<v.size() && v[i] <= N; i++)
            for(int j=i; j<v.size() && v[i]*v[j] <= N; j++)
                if(v[i]*b >= v[j]*a && v[i]*v[j] > Max) {
                    p = v[i], q = v[j];
                    Max = p * q;
                }

        cout << p << " " << q << "\n";
    }
}
