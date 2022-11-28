#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N = stoll(str);

    if(N == 1) {
        cout << "no\n";
        return 0;
    }

    for(int i=2; i*i<=N; i++) {
        if(N % i == 0) {
            cout << "no\n";
            return 0;
        }
    }

    reverse(str.begin(), str.end());

    for(int i=0; i<str.length(); i++) {
        int x = str[i] - '0';

        if(x == 3 || x == 4 || x == 7) {
            cout << "no\n";
            return 0;
        }
        else if(x == 6) str[i] = '9';
        else if(x == 9) str[i] = '6';
    }

    N = stoll(str);

    for(int i=2; i*i<=N; i++) {
        if(N % i == 0) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";
}
