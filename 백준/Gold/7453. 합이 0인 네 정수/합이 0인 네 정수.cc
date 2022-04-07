#include <bits/stdc++.h>
#define MAX 4001
using namespace std;

int arr[4][MAX];
vector<int> sum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int j=0; j<N; j++)
        for(int i=0; i<4; i++) cin >> arr[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            sum.push_back(arr[0][i] + arr[1][j]);

    sort(sum.begin(), sum.end());

    long long ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            int temp = arr[2][i] + arr[3][j];
            ans += upper_bound(sum.begin(), sum.end(), -temp) - lower_bound(sum.begin(), sum.end(), -temp);
        }

    cout << ans;
}
