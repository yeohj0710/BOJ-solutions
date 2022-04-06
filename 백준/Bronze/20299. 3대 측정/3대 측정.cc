#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K, L; cin >> N >> K >> L;

    vector<int> ans;
    while(N--) {
        int a, b, c; cin >> a >> b >> c;

        if(a < L || b < L || c < L) continue;
        if(a+b+c >= K) {
            ans.push_back(a);
            ans.push_back(b);
            ans.push_back(c);
        }
    }

    cout << ans.size()/3 << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
}
