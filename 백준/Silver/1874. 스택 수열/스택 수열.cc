#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    stack<int> s;
    vector<char> ans;
    int nex = 1;

    for(int i=0; i<N; i++) {
        while(nex <= v[i]) {
            s.push(nex++);
            ans.push_back('+');
        }

        if(!s.empty() && s.top() == v[i]) {
            s.pop();
            ans.push_back('-');
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }


    for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
}
