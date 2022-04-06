#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<2; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        int temp = a*6 + b*3 + c*2 + d + e*2;
        cout << temp << " ";
    }
}
