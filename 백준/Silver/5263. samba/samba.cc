#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;
    map<int, int> m;

    while(N--) {
        int x; cin >> x;

        if(m[x] == 0) v.push_back(x);

        m[x]++;
    }

    for(int i=0; i<v.size(); i++)
        if(m[v[i]] % M != 0) {
            cout << v[i] << "\n";
            break;
        }
}
