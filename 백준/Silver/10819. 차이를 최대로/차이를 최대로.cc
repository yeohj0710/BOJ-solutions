#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;

int N, ans = 0;
int arr[MAX], temp[MAX];
bool check[MAX] = {};

void f(int idx) {
    if(idx == N) {
        int sum = 0;
        for(int i=0; i<N-1; i++) sum += abs(temp[i] - temp[i+1]);

        ans = max(ans, sum);
        return;
    }

    for(int i=0; i<N; i++)
        if(!check[i]) {
            temp[idx] = arr[i];
            check[i] = true;
            f(idx + 1);

            check[i] = false;
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for(int i=0; i<N; i++) cin >> arr[i];

    f(0);

    cout << ans << "\n";
}
