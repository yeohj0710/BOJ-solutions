#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d;

    scanf("%04d-%02d-%02d", &a, &b, &c);
    scanf("%d", &d);

    int tot = a * 12 * 30 + (b - 1) * 30 + c + d;

    int x = (tot - 1) / (12 * 30);

    tot -= x * 12 * 30;

    int y = (tot - 1) / 30;

    tot -= y * 30;
    y++;

    int z = tot;

    printf("%04d-%02d-%02d\n", x, y, z);
}
