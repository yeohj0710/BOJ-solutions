#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<vector<char>> v(N, vector<char>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        cout << "Data Set " << t << ":\n";

        for(int i=0; i<M; i++) {
            int sum = 0;
            bool check = false;

            for(int j=0; j<N; j++) {
                if(v[j][i] == 'X') {
                    cout << sum << " ";

                    check = true;
                    break;
                }
                else if(v[j][i] == 'S') sum++;
                else if(v[j][i] == 'H') sum += 3;
            }

            if(!check) cout << "N ";
        }
        cout << "\n\n";
    }
}
