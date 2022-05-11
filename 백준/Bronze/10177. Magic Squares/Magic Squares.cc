#include <bits/stdc++.h>
using namespace std;

const int MAX = 5;

int arr[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> arr[i][j];

        bool check = true;

        int sum = 0;
        for(int i=0; i<N; i++) sum += arr[i][0];

        for(int i=0; i<N; i++) {
            int temp = 0;
            for(int j=0; j<N; j++) temp += arr[i][j];
            if(temp != sum) check = false;
        }

        for(int j=0; j<N; j++) {
            int temp = 0;
            for(int i=0; i<N; i++) temp += arr[i][j];
            if(temp != sum) check = false;
        }

        int temp = 0;
        for(int i=0; i<N; i++) temp += arr[i][i];
        if(temp != sum) check = false;

        temp = 0;
        for(int i=0; i<N; i++) temp += arr[i][N-i-1];
        if(temp != sum) check = false;

        if(check) cout << "Magic square of size " << N << "\n";
        else cout << "Not a magic square\n";
    }
}
