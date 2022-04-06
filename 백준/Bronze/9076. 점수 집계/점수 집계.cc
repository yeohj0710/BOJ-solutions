#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        int Arr[5];
        for(int i=0; i<5; i++) cin >> Arr[i];
        sort(Arr, Arr+5);
        if(Arr[3] - Arr[1] >= 4) cout << "KIN\n";
        else cout << Arr[1]+Arr[2]+Arr[3] << "\n";
    }
}
