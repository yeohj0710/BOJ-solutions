#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int check[10] = {};
        int N; cin >> N;
        while(N) {
            check[N%10]++;
            N /= 10;
        }
        int cnt = 0;
        for(int i=0; i<10; i++)
            if(check[i]) cnt++;
        cout << cnt << "\n";
    }
}
