#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
int N, ans = 0;

void f(int idx, int sum, int cnt) {
    if(idx == N) {
        ans = max(ans, cnt);
        return;
    }

    string a = to_string(sum), b = to_string(v[idx]);

    while(a.length() < b.length()) a = '0' + a;
    while(a.length() > b.length()) b = '0' + b;

    bool check = true;
    for(int i=0; i<a.length(); i++)
        if(a[i] - '0' + b[i] - '0' >= 10) check = false;

    if(check) {
        f(idx+1, sum+v[idx], cnt+1);
        f(idx+1, sum, cnt);
    }
    else f(idx+1, sum, cnt);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f(0, 0, 0);

    cout << ans << "\n";
}
