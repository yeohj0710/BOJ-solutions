#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    string str; getline(cin, str);

    string ans = "";

    for(int i=0; i<M; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            ans += char('a' + (str[i] - 'a' + N) % 26);
        else if(str[i] >= 'A' && str[i] <= 'Z')
            ans += char('A' + (str[i] - 'A' + N) % 26);
        else ans += str[i];
    }

    cout << ans << "\n";
}
