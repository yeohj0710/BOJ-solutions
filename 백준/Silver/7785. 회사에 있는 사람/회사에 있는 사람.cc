#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;
    map<string, bool> m;

    while(N--) {
        string a, b; cin >> a >> b;

        v.push_back(a);

        if(b == "enter") m[a] = true;
        else m[a] = false;
    }

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=v.size()-1; i>=0; i--)
        if(m[v[i]] == true) cout << v[i] << "\n";
}
