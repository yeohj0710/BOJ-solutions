#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N*M);

    for(int i=0; i<N*M; i++) v[i] = i;

    for(int i=0; i<N*M; i++) {
        char c; cin >> c;

        int a = i, b;

        if(c == 'D') b = i + M;
        else if(c == 'U') b = i - M;
        else if(c == 'R') b = i + 1;
        else if(c == 'L') b = i - 1;

        if(f(a) != f(b)) v[f(a)] = f(b);
    }

    vector<int> u;

    for(int i=0; i<N*M; i++) u.push_back(f(i));

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    cout << u.size() << "\n";
}
