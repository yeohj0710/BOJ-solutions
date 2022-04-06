#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int arr1[50], arr2[50];
    for(int i=0; i<N; i++) cin >> arr1[i];
    for(int i=0; i<N; i++) cin >> arr2[i];

    sort(arr1, arr1+N);
    sort(arr2, arr2+N, greater<int>());

    int sum = 0;
    for(int i=0; i<N; i++) sum += arr1[i]*arr2[i];
    cout << sum;
}
