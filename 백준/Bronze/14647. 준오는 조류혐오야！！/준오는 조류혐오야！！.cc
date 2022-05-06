#include <bits/stdc++.h>
using namespace std;

const int MAX = 501;

int arr[MAX][MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int total = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int val; cin >> val;

            while(val > 0) {
                if(val % 10 == 9) {
                    arr[i][j]++;
                    total++;
                }
                val /= 10;
            }
        }

    int Max = 0;
    for(int i=0; i<N; i++) {
        int sum = 0;
        for(int j=0; j<M; j++) sum += arr[i][j];
        Max = max(Max, sum);
    }
    for(int j=0; j<M; j++) {
        int sum = 0;
        for(int i=0; i<N; i++) sum += arr[i][j];
        Max = max(Max, sum);
    }

    cout << total - Max << "\n";
}
