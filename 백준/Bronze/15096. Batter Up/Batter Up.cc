#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(4);

    int N; cin >> N;

    double sum = 0, ball = 0;

    for(int i=0; i<N; i++) {
        double x; cin >> x;

        if(x != -1) sum += x;
        else ball++;
    }

    cout << sum / (N - ball) << "\n";
}
