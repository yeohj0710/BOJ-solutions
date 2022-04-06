#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int arr[10];
    for(int i=0; i<9; i++) {
        int Max = 0;
        for(int j=0; j<N; j++) {
            int value; cin >> value;
            if(value > Max) Max = value;
        }
        arr[i] = Max;
    }

    int Max_ = 0;
    for(int i=0; i<9; i++)
        if(arr[i] > Max_) Max_ = arr[i];
    for(int i=0; i<9; i++)
        if(arr[i] == Max_) {
            if(i == 0) cout << "PROBRAIN";
            else if(i == 1) cout << "GROW";
            else if(i == 2) cout << "ARGOS";
            else if(i == 3) cout << "ADMIN";
            else if(i == 4) cout << "ANT";
            else if(i == 5) cout << "MOTION";
            else if(i == 6) cout << "SPG";
            else if(i == 7) cout << "COMON";
            else if(i == 8) cout << "ALMIGHTY";
        }
}
