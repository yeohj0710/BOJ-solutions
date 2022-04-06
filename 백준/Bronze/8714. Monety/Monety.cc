#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n; cin >> n;

    int a = 0, b = 0;
    while(n--) {
        int value; cin >> value;

        if(value == 0) a++;
        else b++;
    }

    cout << min(a, b);
}
