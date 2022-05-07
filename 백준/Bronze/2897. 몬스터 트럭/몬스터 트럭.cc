#include <bits/stdc++.h>
using namespace std;

const int MAX = 51;

char arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> arr[i][j];
        cin.ignore();
    }

    int ans[5] = {};

    for(int i=0; i<N-1; i++)
        for(int j=0; j<M-1; j++) {
            int car = 0;
            bool check = true;

            for(int k=0; k<2; k++)
                for(int l=0; l<2; l++) {
                    if(arr[i+k][j+l] == '#') check = false;
                    else if(arr[i+k][j+l] == 'X') car++;
                }

            if(!check) continue;
            else ans[car]++;
        }

    for(int i=0; i<5; i++) cout << ans[i] << "\n";
}
