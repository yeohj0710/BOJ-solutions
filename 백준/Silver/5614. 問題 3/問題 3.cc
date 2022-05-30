#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(string &a, string &b) {
    if(a.length() != b.length()) return a.length() < b.length();
    else return a < b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, int> m;
    vector<string> v;

    while(N--) {
        string str; cin >> str;
        int x; cin >> x;

        m[str] += x;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " " << m[v[i]] << "\n";
}
