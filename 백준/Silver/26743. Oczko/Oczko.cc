#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N+1, -1);
    int Max = 0;

    for(int i=1; i<=N; i++) {
        string str; cin >> str;

        int sum = 0, ace = 0;

        for(int j=0; j<str.length(); j++) {
            if(str[j] == 'A') sum++, ace++;
            else if(str[j] >= '2' && str[j] <= '9') sum += str[j] - '0';
            else sum += 10;
        }

        for(int j=0; j<=ace; j++) {
            int score = sum + j*10;

            if(score <= 21) v[i] = max(v[i], score);
        }

        Max = max(Max, v[i]);
    }

    int cnt = 0;

    for(int i=1; i<=N; i++)
        if(v[i] == Max) cnt++;

    cout << cnt << "\n";

    for(int i=1; i<=N; i++)
        if(v[i] == Max) cout << i << " ";
    cout << "\n";
}
