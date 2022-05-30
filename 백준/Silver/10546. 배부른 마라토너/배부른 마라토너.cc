#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, int> m;
    vector<string> v;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        m[str]++;
        v.push_back(str);
    }

    for(int i=0; i<N-1; i++) {
        string str; cin >> str;

        m[str]--;
    }

    for(int i=0; i<v.size(); i++)
        if(m[v[i]] != 0) {
            cout << v[i] << "\n";
            break;
        }
}
