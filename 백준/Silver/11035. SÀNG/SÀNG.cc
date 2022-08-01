#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M;

    while(cin >> N >> M) {
        vector<bool> v(N+1);

        int cnt = 0;
        bool check = false;

        while(true) {
            int x = 2;

            while(v[x]) x++;

            for(int i=x; i<=N; i+=x) {
                if(!v[i]) {
                    v[i] = true;
                    cnt++;

                    if(cnt == M) {
                        cout << i << "\n";

                        check = true;
                        break;
                    }
                }
            }

            if(check) break;
        }
    }
}
