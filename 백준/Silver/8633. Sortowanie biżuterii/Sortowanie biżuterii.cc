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

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++) cout << v[i] << "\n";
}
