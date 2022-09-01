#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        int x = 1e3, y = 1e3;

        for(int i=1; i<=150; i++)
            for(int j=i+1; j<=150; j++) {
                if(i*i + j*j < a*a + b*b) continue;
                if(i*i + j*j == a*a + b*b && i <= a) continue;

                if(i*i + j*j > x*x + y*y) continue;

                if(i*i + j*j < x*x + y*y) x = i, y = j;
                else if(i*i + j*j == x*x + y*y) {
                    if(i < x) x = i, y = j;
                }
            }

        cout << x << " " << y << "\n";
    }
}
