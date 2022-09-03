#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mt19937 mt((unsigned int)time(NULL));
    uniform_int_distribution<int> uid(0, INT_MAX);
    auto rd = bind(uid, mt);

    for(int i=0; i<814; i++)
        cout << (rd() % 16280) - 8140 << " " << (rd() % 16280) - 8140 << "\n";
}
