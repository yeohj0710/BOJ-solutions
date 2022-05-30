#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string str; cin >> str;

        int x = 0;
        bool check = true;

        for(int i=0; i<N; i++) {
            if(str[i] == '>') x++;
            else x--;

            if(x < 0) check = false;
        }

        if(x != 0) check = false;

        if(check) cout << "legal\n";
        else cout << "illegal\n";
    }
}
