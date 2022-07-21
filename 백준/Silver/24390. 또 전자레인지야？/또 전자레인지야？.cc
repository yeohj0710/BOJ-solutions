#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b;
    scanf("%02d:%02d", &a, &b);

    int x = a * 60 + b;

    if(x == 0) {
        cout << 0 << "\n";
        return 0;
    }
    else if(x < 30) {
        cout << x/10 + 1 << "\n";
        return 0;
    }
    else if(x < 60) {
        cout << (x - 30)/10 + 1 << "\n";
        return 0;
    }

    int y = x - 30;
    int ans1 = 1, ans2 = 1;

    ans1 += x / 600;
    x %= 600;

    ans1 += x / 60;
    x %= 60;

    ans1 += x / 30;
    x %= 30;

    ans1 += x / 10;

    ans2 += y / 600;
    y %= 600;

    ans2 += y / 60;
    y %= 60;

    ans2 += y / 30;
    y %= 30;

    ans2 += y / 10;

    cout << min(ans1, ans2) << "\n";
}
