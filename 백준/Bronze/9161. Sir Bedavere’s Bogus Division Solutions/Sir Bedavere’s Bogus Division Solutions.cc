#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=100; i<=999; i++)
        for(int j=100; j<=999; j++) {
            if(i % 10 != j / 100) continue;
            if(i % 111 == 0) continue;

            int a = i, b = j, c = i / 10, d = j % 100;

            if(a * d == b * c)
                cout << a << " / " << b << " = " << c << " / " << d << "\n";
        }
}
