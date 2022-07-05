#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
int N, ans = 0;

void f(int cnt) {
    if(cnt == N+1) {
        ans++;
        return;
    }

    for(int i=1; i<=N; i++) {
        bool check = true;
        for(int j=1; j<cnt; j++) {
            if(v[j] == i) check = false;
            if(j - v[j] == cnt - i) check = false;
            if(j + v[j] == cnt + i) check = false;
        }

        if(check) {
            v[cnt] = i;
            f(cnt+1);
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N+1);

    f(1);

    cout << ans << "\n";
}
