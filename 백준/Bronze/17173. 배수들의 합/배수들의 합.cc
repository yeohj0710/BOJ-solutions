#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    int Arr[1005];
    for(int i=1; i<=M; i++) cin >> Arr[i];
    long long sum = 0;
    for(int i=1; i<=N; i++) {
        bool check = false;
        for(int j=1; j<=M; j++)
            if(i%Arr[j] == 0) check = true;
        if(check) sum += i;
    }
    cout << sum;
}
