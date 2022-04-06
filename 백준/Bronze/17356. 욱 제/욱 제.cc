#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b; cin >> a >> b;
    cout << 1/(1+pow(10, (b-a)/400));
}
