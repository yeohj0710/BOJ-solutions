#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    while(true) {
        if(N % 4 == 0) {
            N -= 3;
            cout << 3 << endl;
        }
        else if(N % 4 == 1) {
            N -= 1;
            cout << 1 << endl;
        }
        else if(N % 4 == 2) {
            N -= 1;
            cout << 1 << endl;
        }
        else if(N % 4 == 3) {
            N -= 2;
            cout << 2 << endl;
        }

        string str; getline(cin, str);

        if(str == "I give up") break;

        int x = str[0] - '0';

        N -= x;
    }
}
