#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    int avg = (a+b+c)/3;

    if(b > avg) cout << abs(b-avg) + abs(c-avg)*2;
    else cout << abs(b-avg) + abs(a-avg)*2;
}
