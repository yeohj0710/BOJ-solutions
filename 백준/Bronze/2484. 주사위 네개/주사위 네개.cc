#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0;
    for(int i=0; i<N; i++) {
        int n[4]; for(int j=0; j<4; j++) cin >> n[j];
        sort(n, n+4);

        int award = 0;
        if(n[0] == n[1] && n[1] == n[2] && n[2] == n[3]) award = 50000 + n[0]*5000;
        else if((n[0] == n[1] && n[1] == n[2]) || (n[1] == n[2] && n[2] == n[3])) award = 10000 + n[1]*1000;
        else if(n[0] == n[1] && n[2] == n[3]) award = 2000 + n[0]*500 + n[2]*500;
        else if(n[0] == n[1] && n[2] != n[3]) award = 1000 + n[0]*100;
        else if(n[1] == n[2] && n[0] != n[3]) award = 1000 + n[1]*100;
        else if(n[2] == n[3] && n[0] != n[1]) award = 1000 + n[2]*100;
        else award = n[3]*100;

        if(award > Max) Max = award;
    }

    cout << Max;
}
