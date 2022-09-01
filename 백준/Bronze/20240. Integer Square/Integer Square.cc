#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = -1, b = -1;
    bool check = false;

    for(int i=0; i<=1000; i++) {
        for(int j=0; j<=1000; j++)
            if(i*i + j*j == N) {
                a = i, b = j;
                check = true;
                break;
            }
        if(check) break;
    }

    if(a == -1 && b == -1) {
        cout << "Impossible\n";
        return 0;
    }

    cout << 0 << " " << 0 << "\n";
    cout << a << " " << b << "\n";
    cout << -b << " " << a << "\n";
    cout << -b + a << " " << a + b << "\n";
}
