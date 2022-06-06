#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    string str; getline(cin, str);

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            cout << char('a' + (str[i] - 'a' + 26 - N) % 26);

            N++;
            if(N == 26) N = 1;
        }
        else cout << str[i];
    }
    cout << "\n";
}
