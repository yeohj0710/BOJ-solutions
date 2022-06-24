#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0, dir = 0, a = 1, b = 0;
    int x = 0, y = 0;

    while(true) {
        if(cnt == N) break;

        if(dir == 0) y++;
        else if(dir == 1) x++;
        else if(dir == 2) y--;
        else if(dir == 3) x--;

        cnt++;

        b++;
        if(b == a) {
            if(dir == 1 || dir == 3) a++;
            b = 0;

            dir = (dir + 1) % 4;
        }
    }

    cout << x << " " << y << "\n";
}
