#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    int N = str.length();

    vector<int> v(N);
    for(int i=1; i<N; i++) {
        if(str[i-1] == '(' && str[i] == '(') v[i] = v[i-1] + 1;
        else v[i] = v[i-1];
    }

    int ans = 0;
    for(int i=1; i<N-1; i++)
        if(str[i] == ')' && str[i+1] == ')') ans += v[i-1];

    cout << ans << "\n";
}
