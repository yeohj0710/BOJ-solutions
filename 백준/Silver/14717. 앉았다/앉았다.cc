#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(a > b) swap(a, b);

    vector<int> v;
    for(int i=1; i<=10; i++) {
        if(i == a && i == b) continue;
        else if(i == a || i == b) v.push_back(i);
        else {
            v.push_back(i);
            v.push_back(i);
        }
    }

    int tot = 0, cnt = 0;
    for(int i=0; i<v.size(); i++)
        for(int j=i+1; j<v.size(); j++) {
            if(a == b && v[i] == v[j]) {
                if(a > v[i]) cnt++;
            }
            else if(a == b && v[i] != v[j]) cnt++;
            else if(a != b && v[i] != v[j]) {
                if((a+b)%10 > (v[i]+v[j])%10) cnt++;
            }

            tot++;
        }

    double ans = (double)cnt/tot;

    cout << fixed;
    cout.precision(3);

    cout << ans << "\n";
}
