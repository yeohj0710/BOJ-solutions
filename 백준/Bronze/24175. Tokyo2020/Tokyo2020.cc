#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> g(2025), m(2025);
        for(int i=0; i<N; i++) {
            int a; string b, c; cin >> a >> b >> c;

            m[a]++;
            if(c == "Gold") g[a]++;
        }

        int Max = 0;
        for(int i=1896; i<=2021; i++) Max = max(Max, g[i]);
        for(int i=1896; i<=2021; i++)
            if(g[i] == Max) {
                cout << i << " ";
                break;
            }

        Max = 0;
        for(int i=1896; i<=2021; i++) Max = max(Max, m[i]);
        for(int i=1896; i<=2021; i++)
            if(m[i] == Max) {
                cout << i << "\n";
                break;
            }
    }
}
