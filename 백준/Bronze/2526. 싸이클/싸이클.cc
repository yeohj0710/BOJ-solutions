#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;

    int cur = N;
    v.push_back(cur);

    while(true) {
        cur = (cur * N) % M;

        bool check = false;
        for(int i=0; i<v.size(); i++)
            if(v[i] == cur) {
                cout << v.size() - i << "\n";

                check = true;
                break;
            }

        if(check) break;

        v.push_back(cur);
    }
}
