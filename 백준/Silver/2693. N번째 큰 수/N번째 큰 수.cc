#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int arr[10];
        for(int i=0; i<10; i++) cin >> arr[i];

        sort(arr, arr+10, greater<int>());
        cout << arr[2] << "\n";
    }
}
