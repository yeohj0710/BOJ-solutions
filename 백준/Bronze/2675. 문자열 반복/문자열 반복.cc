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

        for(int i=0; i<str.length(); i++)
            for(int j=0; j<N; j++) cout << str[i];
        cout << "\n";
    }
}
