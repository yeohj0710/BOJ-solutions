#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        char a, b; cin >> a >> b;
        if(a == '#' && b == '#') break;

        int N; cin >> N;
        cin.ignore();

        cout << "Case " << t << "\n";

        while(N--) {
            string str; getline(cin, str);

            for(int i=0; i<str.length(); i++) {
                if(str[i] == a || str[i] == b || str[i] == char(a + 'A' - 'a')
                   || str[i] == char(b + 'A' - 'a')) cout << "_";
                else cout << str[i];
            }

            cout << "\n";
        }

        cout << "\n";
    }
}
