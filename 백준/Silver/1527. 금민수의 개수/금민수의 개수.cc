#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

void f(int cur, int x, string str) {
    if(str.length() == x) {
        v.push_back(stoll(str));
        return;
    }

    f(cur+1, x, str + "4");
    f(cur+1, x, str + "7");
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    for(int i=1; i<=10; i++) f(0, i, "");

    int ans = 0;
    for(int i=0; i<v.size(); i++)
        if(v[i] >= a && v[i] <= b) ans++;

    cout << ans << "\n";
}
