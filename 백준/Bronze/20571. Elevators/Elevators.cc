#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N; cin >> N;

    if(str == "residential") {
        if(N == 1) cout << 0;
        else if(N <= 5) cout << 1;
        else if(N <= 10) cout << 2;
        else if(N <= 15) cout << 3;
        else if(N <= 20) cout << 4;
    }
    else if(str == "commercial") {
        if(N == 1) cout << 0;
        else if(N <= 7) cout << 1;
        else if(N <= 14) cout << 2;
        else if(N <= 20) cout << 3;
    }
    else if(str == "industrial") {
        if(N == 1) cout << 0;
        else if(N <= 4) cout << 1;
        else if(N <= 8) cout << 2;
        else if(N <= 12) cout << 3;
        else if(N <= 16) cout << 4;
        else if(N <= 20) cout << 5;
    }
    cout << "\n";
}
