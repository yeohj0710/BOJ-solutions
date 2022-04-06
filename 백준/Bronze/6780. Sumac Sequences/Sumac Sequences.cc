#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int cnt = 2;
    while(true) {
        if(a < b) break;

        int temp = b;
        b = a - b;
        a = temp;
        cnt++;
    }

    cout << cnt;
}
