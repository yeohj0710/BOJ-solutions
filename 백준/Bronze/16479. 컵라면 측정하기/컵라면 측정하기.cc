#include <bits/stdc++.h>
using namespace std;

int Arr[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K, D1, D2;
    cin >> K >> D1 >> D2;
    cout << (double)K*K - (double)(D1-D2)/2*(D1-D2)/2;
}
