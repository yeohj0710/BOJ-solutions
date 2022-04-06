#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int x[500], y[500];
    for(int i=0; i<N; i++) cin >> x[i] >> y[i];

    int dist = 0, a = 0, b = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(abs(x[i] - x[j]) + abs(y[i] - y[j]) > dist) {
                a = i, b = j;
                dist = abs(x[i] - x[j]) + abs(y[i] - y[j]);
            }

    cout << a+1 << " " << b+1;
}
