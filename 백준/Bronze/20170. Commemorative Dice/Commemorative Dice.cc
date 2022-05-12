#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> u(6), v(6);
    for(int i=0; i<6; i++) cin >> u[i];
    for(int i=0; i<6; i++) cin >> v[i];

    int cnt = 0;
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            if(u[i] > v[j]) cnt++;

    cout << cnt/__gcd(cnt, 36) << "/" << 36/__gcd(cnt, 36) << "\n";
}
