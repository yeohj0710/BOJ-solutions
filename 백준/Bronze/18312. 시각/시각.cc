#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int ans = 0;

    for(int i=0; i<=N; i++)
        for(int j=0; j<60; j++)
            for(int k=0; k<60; k++) {
                string str = to_string(i) + to_string(j) + to_string(k);

                bool check = false;
                for(int l=0; l<str.length(); l++)
                    if(str[l] == char('0' + K)) check = true;

                if(K == 0)
                    if(i < 10 || j < 10 || k < 10) check = true;

                if(check) ans++;
            }

    cout << ans << "\n";
}
