#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N), ans(N);

    while(M--) {
        int a, b, c; string str;
        cin >> a >> str >> b >> c;

        if(str == "START") v[a-1] = b*60 + c;
        else ans[a-1] += b*60 + c - v[a-1];
    }

    for(int i=0; i<N; i++) cout << ans[i]/60 << " " << ans[i]%60 << "\n";
}
