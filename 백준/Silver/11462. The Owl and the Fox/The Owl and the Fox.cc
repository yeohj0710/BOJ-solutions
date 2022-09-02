#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "END") break;

        int N = stoi(str);

        int tmp = N, x = 0;

        while(tmp > 0) {
            x += tmp % 10;
            tmp /= 10;
        }

        for(int i=N-1; ; i--) {
            tmp = i;

            int y = 0;

            while(tmp > 0) {
                y += tmp % 10;
                tmp /= 10;
            }

            if(y == x-1) {
                cout << i << "\n";
                break;
            }
        }
    }
}
