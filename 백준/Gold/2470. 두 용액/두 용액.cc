#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int i = 0, j = N-1;
    int a, b, Min = INT_MAX;
    while(i < j) {
        int sum = arr[i] + arr[j];

        if(abs(sum) < Min) {
            Min = abs(sum);
            a = arr[i], b = arr[j];
        }

        if(sum == 0) break;
        else if(sum < 0) i++;
        else if(sum > 0) j--;
    }

    cout << a << " " << b;
}
