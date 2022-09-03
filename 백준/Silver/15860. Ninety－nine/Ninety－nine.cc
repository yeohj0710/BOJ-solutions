#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mt19937 mt((unsigned int)time(NULL));
    uniform_int_distribution<int> uid(0, INT_MAX);
    auto rd = bind(uid, mt);

    int x = 0;

    while(true) {
        if(x % 3 == 0) x += (rd() % 2 + 1);
        else if(x % 3 == 1) x += 2;
        else if(x % 3 == 2) x += 1;

        cout << x << endl;

        if(x >= 99) break;

        cin >> x;

        if(x >= 99) break;
    }
}
