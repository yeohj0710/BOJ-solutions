#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int pre = 0;

    while(true) {
        int N; cin >> N;
        if(N == 99999) break;

        int a = N / 1000, b = N % 1000;

        a = (a/10) + (a%10);

        int rot;

        if(a == 0) rot = pre;
        else if(a % 2 == 0) rot = 1;
        else if(a % 2 == 1) rot = -1;

        pre = rot;

        if(rot == 1) cout << "right ";
        else if(rot == -1) cout << "left ";

        cout << b << "\n";
    }
}
