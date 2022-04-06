#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int arr[205][3], N; cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<3; j++)
            cin >> arr[i][j];

    int score[205] = {};
    for(int k=0; k<3; k++)
        for(int i=0; i<N; i++) {
            bool check = true;
            for(int j=0; j<N; j++)
                if(i != j && arr[i][k] == arr[j][k]) check = false;
            if(check) score[i] += arr[i][k];
        }

    for(int i=0; i<N; i++)
        cout << score[i] << "\n";
}
