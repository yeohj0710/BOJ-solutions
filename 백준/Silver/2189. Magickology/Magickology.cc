#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        vector<vector<int>> v(N, vector<int>(N));
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        int sum = 0;
        for(int i=0; i<N; i++) sum += v[0][i];

        bool check = true;
        for(int i=0; i<N; i++) {
            int temp = 0;
            for(int j=0; j<N; j++) temp += v[i][j];
            if(temp != sum) check = false;
        }
        for(int i=0; i<N; i++) {
            int temp = 0;
            for(int j=0; j<N; j++) temp += v[j][i];
            if(temp != sum) check = false;
        }

        bool check2 = true;
        int x = 0, y = 0;
        for(int i=0; i<N; i++) {
            x += v[i][i];
            y += v[i][N-1-i];
        }
        if(x != sum || y != sum) check2 = false;

        bool check3 = true;
        int Min = INT_MAX, Max = INT_MIN;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                Min = min(Min, v[i][j]);
                Max = max(Max, v[i][j]);
            }
        if(Max - Min != N*N - 1) check3 = false;

        bool check4 = true;
        map<int, bool> m;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(m[v[i][j]]) check4 = false;
                m[v[i][j]] = true;
            }

        cout << "Square " << t << ": ";
        if(check && check2 && check3 && check4) cout << "Magically-Magick Square\n";
        else if(check && check2 && !check3 && check4) cout << "Strongly-Magick Square\n";
        else if(check && check2 && !check3 && !check4) cout << "Weakly-Magick Square\n";
        else if(check && !check2) cout << "Semi-Magick Square\n";
        else cout << "Not a Magick Square\n";
    }
}
