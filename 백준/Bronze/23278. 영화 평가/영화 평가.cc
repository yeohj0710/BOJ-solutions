#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, L, H; cin >> N >> L >> H;

    vector<int> score(N);
    for(int i=0; i<N; i++) cin >> score[i];
    sort(score.begin(), score.end());

    int sum = 0;
    for(int i=L; i<N-H; i++) sum += score[i];

    cout << fixed; cout.precision(10);
    cout << (double)sum/(N-L-H);
}
