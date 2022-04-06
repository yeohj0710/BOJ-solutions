#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    double sum = 0;
    while(N--) {
        double x, y; cin >> x >> y;
        sum += x*y;
    }
    cout << sum;
}
