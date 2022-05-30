#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, bool> m;

    string prev;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        if((i != 0 && str[0] != prev[prev.length()-1]) || m[str]) {
            if(i % 2 == 0) cout << "Player 1 lost\n";
            else cout << "Player 2 lost\n";
            return 0;
        }

        m[str] = true;
        prev = str;
    }

    cout << "Fair Game\n";
}
