#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    int N; cin >> N;

    int Max = 0;
    for(int i=0; i<N; i++) {
        int sum = 0;

        for(int j=0; j<3; j++) {
            int x, y, z; cin >> x >> y >> z;

            sum += a*x + b*y + c*z;
        }

        Max = max(Max, sum);
    }

    cout << Max << "\n";
}
