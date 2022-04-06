#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> score(N);
    for(int i=0; i<N; i++) cin >> score[i];

    vector<int> vote(N);
    for(int i=0; i<M; i++) {
        int cost; cin >> cost;

        int num = 0;
        for(int j=0; j<N; j++)
            if(score[j] <= cost) {
                num = j;
                break;
            }

        vote[num]++;
    }

    int Max = 0;
    for(int i=0; i<N; i++)
        if(vote[i] > Max) Max = vote[i];

    for(int i=0; i<N; i++)
        if(vote[i] == Max) {
            cout << i+1;
            return 0;
        }
}
