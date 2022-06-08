#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N, M; cin >> M >> N;
        cin.ignore();

        vector<vector<int>> v(N, vector<int>(M));

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                char c; cin >> c;
                if(c == 'S' || c == 'G') v[i][j] = 1;
                else v[i][j] = 0;
            }
            cin.ignore();
        }

        int ans = 0;
        for(int a=0; a<N; a++)
            for(int b=0; b<M; b++)
                for(int c=a; c<N; c++)
                    for(int d=b; d<M; d++) {
                        bool check = true;
                        for(int e=a; e<=c; e++)
                            for(int f=b; f<=d; f++)
                                if(v[e][f] == 0) check = false;
                        if(check) ans = max(ans, (c-a+1)*(d-b+1));
                    }

        cout << ans << "\n";
    }
}
