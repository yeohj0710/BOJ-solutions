#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int S; cin >> S;

    int cur = S-1;

    vector<int> ans;
    ans.push_back(S);

    while(true) {
        char dir; cin >> dir;
        if(dir == '#') break;

        char c; cin >> c;

        if(dir == 'A') cur = (cur - (c - '0') + 8) % 8;
        else cur = (cur + (c - '0')) % 8;

        ans.push_back(cur + 1);
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";

    int vis[9] = {};
    for(int i=0; i<ans.size(); i++) vis[ans[i]]++;

    int cnt = 0;
    for(int i=1; i<=8; i++)
        if(vis[i] > 0) cnt++;

    bool check = true;

    if(cnt < 5) check = false;

    for(int i=1; i<=8; i++)
        if(vis[i] >= 2) check = false;

    if(!check) cout << "reject";
    cout << "\n";
}
