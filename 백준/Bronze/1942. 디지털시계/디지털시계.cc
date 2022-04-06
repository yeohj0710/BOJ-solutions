#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL), cout.tie(NULL);

    for(int t=0; t<3; t++) {
        int a, b, c, x, y, z;

        scanf("%02d:%02d:%02d", &a, &b, &c);
        scanf("%02d:%02d:%02d", &x, &y, &z);

        int cnt = 0;
        while(true) {
            if((a*10000 + b*100 + c) % 3 == 0) cnt++;

            if(a == x && b == y && c == z) break;

            if(a == 23 && b == 59 && c == 59) a = 0, b = 0, c = 0;
            else if(b == 59 && c == 59) a++, b = 0, c = 0;
            else if(c == 59) b++, c = 0;
            else c++;
        }
        cout << cnt << "\n";
    }
}
