#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a[3];
    for(int i=0; i<3; i++) cin >> a[i];
    sort(a, a+3);

    cout << a[0] + a[1] + min(a[0] + a[1] - 1, a[2]);
}
