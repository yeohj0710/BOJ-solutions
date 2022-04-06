#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long a, b; cin >> a >> b;

    long long diff1 = abs((a/2)*b - (a - a/2)*b);
    long long diff2 = abs(a*(b/2) - a*(b - b/2));

    if(diff1 < diff2) cout << diff1;
    else cout << diff2;
}
