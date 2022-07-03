#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<string> ans;

void f(int sum, string str) {
    if(sum > N) return;

    if(sum == N) {
        ans.push_back(str);
        return;
    }

    f(sum + 1, str + "+1");
    f(sum + 2, str + "+2");
    f(sum + 3, str + "+3");
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    f(0, "");

    sort(ans.begin(), ans.end());

    if(ans.size() >= M) cout << ans[M-1].substr(1, ans[M-1].length()-1) << "\n";
    else cout << -1 << "\n";
}
