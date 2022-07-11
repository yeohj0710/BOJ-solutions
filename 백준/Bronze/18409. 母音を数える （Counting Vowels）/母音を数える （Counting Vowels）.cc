#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    string v = "aeiou";

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<v.length(); j++)
            if(str[i] == v[j]) ans++;

    cout << ans << "\n";
}
