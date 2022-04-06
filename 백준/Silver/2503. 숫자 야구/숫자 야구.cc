#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> num(N), strike(N), ball(N);
    for(int i=0; i<N; i++) cin >> num[i] >> strike[i] >> ball[i];

    int ans = 0;
    for(int i=1; i<=9; i++)
        for(int j=1; j<=9; j++) {
            if(i == j) continue;
            for(int k=1; k<=9; k++) {
                if(i == k || j == k) continue;

                bool check = true;
                for(int x=0; x<N; x++) {
                    int S = 0, B = 0;
                    int a = num[x]/100, b = (num[x]/10)%10, c = num[x]%10;

                    if(i == a) S++;
                    if(j == b) S++;
                    if(k == c) S++;

                    if(i == b || i == c) B++;
                    if(j == c || j == a) B++;
                    if(k == a || k == b) B++;

                    if(S != strike[x] || B != ball[x]) {
                        check = false;
                        break;
                    }
                }

                if(check) ans++;
            }
        }

    cout << ans;
}
