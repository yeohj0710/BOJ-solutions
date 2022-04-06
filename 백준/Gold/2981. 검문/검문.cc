#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if(a < b) swap(a, b);
    while(b != 0) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int gcd = arr[1] - arr[0];
    for(int i=2; i<N; i++)
        gcd = GCD(gcd, arr[i] - arr[i-1]);

    vector<int> ans;
    for(int i=1; i*i<=gcd; i++)
        if(gcd%i == 0) {
            ans.push_back(i);
            if(gcd/i != i) ans.push_back(gcd/i);
        }
    sort(ans.begin(), ans.end());

    for(int i=1; i<ans.size(); i++)
        cout << ans[i] << " ";
}
