#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, m; cin >> a >> m;

    for(int i=1; ; i++)
        if((a * i) % m == 1) {
            cout << i << "\n";
            break;
        }
}
