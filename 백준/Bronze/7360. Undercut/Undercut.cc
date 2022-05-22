#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> u(N), v(N);
        for(int i=0; i<N; i++) cin >> u[i];
        for(int i=0; i<N; i++) cin >> v[i];

        int a = 0, b = 0;
        for(int i=0; i<N; i++) {
            if(u[i] == 1 && v[i] == 2) a += 6;
            else if(u[i] == 2 && v[i] == 1) b += 6;
            else if(u[i] + 1 == v[i]) a += u[i] + v[i];
            else if(u[i] == v[i] + 1) b += u[i] + v[i];
            else if(u[i] > v[i]) a += u[i];
            else if(u[i] < v[i]) b += v[i];
        }

        cout << "A has " << a << " points. B has " << b << " points.\n\n";
    }
}
