#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<bool> v(N+1, true);

    vector<int> u;
    for(int i=1; i<=N; i++) u.push_back(i);

    while(M--) {
        string str; cin >> str;

        int x;

        if(str == "first") x = 0;
        else if(str == "second") x = 1;
        else if(str == "third") x = 2;

        for(int i=0; i<u.size(); i++)
            if(i % 3 != x) v[u[i]] = false;

        vector<int> w;

        for(int j=0; j<u.size(); j+=3) w.push_back(u[j]);
        for(int j=1; j<u.size(); j+=3) w.push_back(u[j]);
        for(int j=2; j<u.size(); j+=3) w.push_back(u[j]);

        u = w;
    }

    for(int i=1; i<=N; i++)
        if(v[i]) cout << i << " ";
    cout << "\n";
}
