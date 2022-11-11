#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string a = "", b = "";

    while(N > 0) {
        if(N % 3 == 2) {
            cout << 0 << "\n";
            return 0;
        }

        if(N % 3 == 1) a += '1';
        else a += '0';

        N /= 3;
    }

    while(M > 0) {
        if(M % 3 == 2) {
            cout << 0 << "\n";
            return 0;
        }

        if(M % 3 == 1) b += '1';
        else b += '0';

        M /= 3;
    }

    while(a.length() < b.length()) a += '0';
    while(a.length() > b.length()) b += '0';

    for(int i=0; i<a.length(); i++) {
        if(a[i] == b[i]) {
            cout << 0 << "\n";
            return 0;
        }
    }

    cout << 1 << "\n";
}
