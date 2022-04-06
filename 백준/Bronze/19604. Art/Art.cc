#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int x[101], y[101];
    for(int i=0; i<N; i++) scanf("%d,%d", &x[i], &y[i]);
    sort(x, x+N); sort(y, y+N);
    cout << x[0] - 1 << "," << y[0] - 1 << "\n";
    cout << x[N-1] + 1 << "," << y[N-1] + 1 << "\n";
}
