#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    vector<bool> check(N);
    for(int i=0; i<N; i++) {
        int value; cin >> value;
        if(value == 1) check[i] = true;
        else check[i] = false;
    }

    int total = 0, sum = 0;
    for(int i=0; i<N; i++) {
        total += arr[i];
        if(!check[i]) sum += arr[i];
    }

    cout << total << "\n" << sum;
}
