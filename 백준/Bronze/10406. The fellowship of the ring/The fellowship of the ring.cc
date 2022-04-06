#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, n; cin >> a >> b >> n;

    int cnt = 0;
    while(n--) {
        int value; cin >> value;
        if(value >= a && value <= b) cnt++;
    }

    cout << cnt;
}
