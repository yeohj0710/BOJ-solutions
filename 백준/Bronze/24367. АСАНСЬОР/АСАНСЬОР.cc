#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int a, b, c, d; cin >> a >> b >> c >> d;

    int ans;

    if(N == 1) ans = 4;
    else if(N == 2) {
        if(a + b <= M && c + d <= M) ans = 2;
        else if(a + c <= M && b + d <= M) ans = 2;
        else if(a + d <= M && b + c <= M) ans = 2;
        else if(a + b <= M) ans = 3;
        else if(a + c <= M) ans = 3;
        else if(a + d <= M) ans = 3;
        else if(b + c <= M) ans = 3;
        else if(b + d <= M) ans = 3;
        else if(c + d <= M) ans = 3;
        else ans = 4;
    }
    else if(N == 3) {
        if(a + b + c <= M) ans = 2;
        else if(a + b + d <= M) ans = 2;
        else if(a + c + d <= M) ans = 2;
        else if(b + c + d <= M) ans = 2;
        else if(a + b <= M && c + d <= M) ans = 2;
        else if(a + c <= M && b + d <= M) ans = 2;
        else if(a + d <= M && b + c <= M) ans = 2;
        else if(a + b <= M) ans = 3;
        else if(a + c <= M) ans = 3;
        else if(a + d <= M) ans = 3;
        else if(b + c <= M) ans = 3;
        else if(b + d <= M) ans = 3;
        else if(c + d <= M) ans = 3;
        else ans = 4;
    }
    else {
        if(a + b + c + d <= M) ans = 1;
        else if(a + b + c <= M) ans = 2;
        else if(a + b + d <= M) ans = 2;
        else if(a + c + d <= M) ans = 2;
        else if(b + c + d <= M) ans = 2;
        else if(a + b <= M && c + d <= M) ans = 2;
        else if(a + c <= M && b + d <= M) ans = 2;
        else if(a + d <= M && b + c <= M) ans = 2;
        else if(a + b <= M) ans = 3;
        else if(a + c <= M) ans = 3;
        else if(a + d <= M) ans = 3;
        else if(b + c <= M) ans = 3;
        else if(b + d <= M) ans = 3;
        else if(c + d <= M) ans = 3;
        else ans = 4;
    }

    cout << ans << "\n";
}
