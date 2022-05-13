#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double score[2] = {};

        for(int i=0; i<2; i++)
            for(int j=0; j<3; j++) {
                double x, y; cin >> x >> y;

                double dist = sqrt(pow(x, 2) + pow(y, 2));

                if(dist <= 3) score[i] += 100;
                else if(dist <= 6) score[i] += 80;
                else if(dist <= 9) score[i] += 60;
                else if(dist <= 12) score[i] += 40;
                else if(dist <= 15) score[i] += 20;
            }

        cout << "SCORE: " << score[0] << " to " << score[1] << ", ";

        if(score[0] == score[1]) cout << "TIE.\n";
        else if(score[0] > score[1]) cout << "PLAYER 1 WINS.\n";
        else if(score[0] < score[1]) cout << "PLAYER 2 WINS.\n";
    }
}
