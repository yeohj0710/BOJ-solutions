#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    
    stack<int> s;
    
    int ans = n-1;
    
    while(n--) {
        int x; cin >> x;
        
        int cnt = 0;
        
        while(!s.empty() && s.top() < x) {
            s.pop();
            cnt++;
        }
        
        if(s.empty() && cnt >= 1) cnt--;
        
        s.push(x);
        
        ans += cnt;
    }
    
    cout << ans << "\n";
}
