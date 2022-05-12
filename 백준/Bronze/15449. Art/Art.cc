#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> arr(5);
    for(int i=0; i<5; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int ans = 0;
    for(int i=0; i<5; i++)
        for(int j=i+1; j<5; j++)
            for(int k=j+1; k<5; k++)
                if(arr[i] + arr[j] > arr[k]) ans++;

    cout << ans << "\n";
}
