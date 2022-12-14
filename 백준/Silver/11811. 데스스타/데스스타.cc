#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(N));
    vector<vector<bool>> u(N, vector<bool>(32));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            int x; cin >> x;

            if(i == j) continue;

            string str = "";

            while(x > 0) {
                str = char('0' + x % 2) + str;

                x /= 2;
            }

            reverse(str.begin(), str.end());

            for(int k=0; k<str.length(); k++)
                if(str[k] == '1') u[i][k] = u[j][k] = true;
        }

    for(int i=0; i<N; i++) {
        int sum = 0;

        for(int j=31; j>=0; j--) {
            sum = sum * 2;

            if(u[i][j]) sum++;
        }

        cout << sum << " ";
    }
    cout << "\n";
}
