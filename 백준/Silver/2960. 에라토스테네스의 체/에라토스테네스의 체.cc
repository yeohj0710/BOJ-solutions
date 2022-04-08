#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int arr[1005];
    for(int i=1; i<=N; i++) arr[i] = i;

    int cnt = 0;
    for(int i=2; i<=N; i++) {
        bool check = true;
        for(int j=2; j<i; j++)
            if(i % j == 0) {
                check = false;
                break;
            }

        if(!check) continue;

        for(int j=i; j<=N; j+=i)
            if(arr[j] != 0) {
                arr[j] = 0;
                cnt++;
                if(cnt == K) {
                    cout << j;
                    return 0;
                }
            }
    }
}
