#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0;
    vector<int> v, ans;

    for(int i=N; i>0; i--) {
        v.clear();

        v.push_back(N);
        v.push_back(i);

        while(true) {
            int x = v[v.size()-2] - v[v.size()-1];
            if(x < 0) break;

            v.push_back(x);
        }

        if(v.size() > Max) {
            Max = v.size();
            ans = v;
        }
    }

    cout << Max << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
