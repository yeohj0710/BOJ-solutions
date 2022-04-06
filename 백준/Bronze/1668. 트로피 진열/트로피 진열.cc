#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int arr[50];
    for(int i=0; i<N; i++) cin >> arr[i];

    int Max = 0, cnt = 0;
    for(int i=0; i<N; i++)
        if(arr[i] > Max) {
            cnt++;
            Max = arr[i];
        }
    cout << cnt << "\n";

    Max = 0, cnt = 0;
    for(int i=N-1; i>=0; i--)
        if(arr[i] > Max) {
            cnt++;
            Max = arr[i];
        }
    cout << cnt << "\n";
}
