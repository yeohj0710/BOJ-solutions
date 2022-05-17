#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;
    map<string, int> m;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        if(m[str] == 0) v.push_back(str);
        m[str]++;
    }

    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<v.size(); i++) ans = max(ans, m[v[i]]);

    for(int i=0; i<v.size(); i++)
        if(m[v[i]] == ans) {
            cout << v[i] << "\n";
        }
}
