#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, L; cin >> N >> L;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    if(arr[0] > L) {
        cout << L << "\n";
        return 0;
    }

    for(int i=1; i<N; i++)
        if(arr[i] > L+i) {
            cout << L+i << "\n";
            return 0;
        }

    cout << L+N << "\n";
}
