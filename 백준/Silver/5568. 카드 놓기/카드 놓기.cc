#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<string> v, ans;
vector<bool> check;

void f(int cnt, string str) {
    if(cnt == M) {
        ans.push_back(str);
        return;
    }

    for(int i=0; i<N; i++) {
        if(!check[i]) {
            check[i] = true;
            f(cnt + 1, str + v[i]);
            check[i] = false;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    check.resize(N);
    f(0, "");

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    cout << ans.size() << "\n";
}
