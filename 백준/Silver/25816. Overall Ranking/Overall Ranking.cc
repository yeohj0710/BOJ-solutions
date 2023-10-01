#include <bits/stdc++.h>
#define int long long
using namespace std;

unordered_map<string, int> m, mm;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v;

    for(int i=1; i<=N; i++) {
        string str; cin >> str;

        if(m[str] == 0) v.push_back(str);

        m[str] += i;
        mm[str]++;
    }

    sort(v.begin(), v.end(), [](string a, string b) {
        return (double)m[a] / mm[a] < (double)m[b] / mm[b];
    });

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
