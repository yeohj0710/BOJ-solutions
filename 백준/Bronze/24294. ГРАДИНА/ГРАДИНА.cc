#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    long long sum = (w1+2)*(h1+2) - w1*h1 + (w2+2)*(h2+2) - w2*h2;
    long long L = min(w1+2, w2+2);
    cout << sum - 2*L;
}
