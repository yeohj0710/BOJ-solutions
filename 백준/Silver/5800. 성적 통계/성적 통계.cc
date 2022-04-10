#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> score(N);
        for(int i=0; i<N; i++) cin >> score[i];

        sort(score.begin(), score.end());

        int maxgap = 0;
        for(int i=1; i<N; i++)
            maxgap = max(maxgap, score[i] - score[i-1]);

        cout << "Class " << t << "\n";
        cout << "Max " << score[N-1] << ", Min " << score[0] << ", Largest gap " << maxgap << "\n";
    }
}
