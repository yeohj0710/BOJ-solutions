#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<string, string> a, pair<string, string> b) {
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<string, string>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);

    map<string, string> m1, m2;

    for(int i=0; i<N; i+=3) {
        string a = v[i].first + ' ' + v[i].second;
        string b = v[i+1].first + ' ' + v[i+1].second;
        string c = v[i+2].first + ' ' + v[i+2].second;

        m1[a] = b;
        m2[a] = c;

        m1[b] = a;
        m2[b] = c;

        m1[c] = a;
        m2[c] = b;
    }

    int M; cin >> M;
    cin.ignore();

    while(M--) {
        string str; getline(cin, str);

        cout << m1[str] << "\n" << m2[str] << "\n";
    }
}
