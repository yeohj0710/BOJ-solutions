#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y, n; };

bool cmp(s a, s b) {
    if(a.y != b.y) return a.y > b.y;
    else if(a.x != b.x) return a.x < b.x;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N*3);
    for(int i=0; i<N*3; i++) {
        cin >> v[i].x >> v[i].y;

        v[i].n = i+1;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N*3; i+=3)
        cout << v[i].n << " " << v[i+1].n << " " << v[i+2].n << "\n";
}
