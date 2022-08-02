#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e6 + 1;

    vector<bool> p(Max, true);
    p[1] = true;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int N; cin >> N;

    for(int i=0; i<v.size() && v[i] <= N; i++) {
        map<int, bool> m;
        m[v[i]] = true;

        int cur = v[i];
        bool check = true;

        while(true) {
            int sum = 0;

            while(cur > 0) {
                sum += (cur % 10) * (cur % 10);
                cur /= 10;
            }

            cur = sum;

            if(cur == 1) {
                cout << v[i] << "\n";
                break;
            }

            if(m[cur]) break;
            m[cur] = true;
        }
    }
}
