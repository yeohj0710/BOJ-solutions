#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    while(N--) {
        string str; cin >> str;

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] = char(str[i] - 'A' + 'a');

        bool check = false;

        for(int i=0; i<str.length()-3; i++)
            if(str.substr(i, 4) == "pink" || str.substr(i, 4) == "rose") check = true;

        if(check) ans++;
    }

    if(ans > 0) cout << ans << "\n";
    else cout << "I must watch Star Wars with my daughter\n";
}
