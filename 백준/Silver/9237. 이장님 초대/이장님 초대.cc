#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    for(int i=0; i<N; i++) arr[i] += i+2;

    int Max = 0;
    for(int i=0; i<N; i++)
        if(arr[i] > Max) Max = arr[i];

    cout << Max;
}
