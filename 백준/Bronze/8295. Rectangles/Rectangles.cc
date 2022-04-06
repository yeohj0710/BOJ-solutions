#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, p; cin >> n >> m >> p;

    int cnt = 0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++) {
            if(2*(i+j) < p) continue;
            cnt += (n-i+1) * (m-j+1);
        }
    cout << cnt;
}
