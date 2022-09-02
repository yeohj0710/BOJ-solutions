#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int a = 0, b = 0;

    for(int i=0; i<N; i++) {
        if(i-(M-1) < 0 || i+(M-1) >= N) continue;

        bool check = true;

        for(int j=i-(M-1); j<i; j++)
            if(v[j] >= v[j+1]) check = false;

        for(int j=i; j<i+(M-1); j++)
            if(v[j] <= v[j+1]) check = false;

        if(check) a++;
    }

    for(int i=0; i<N; i++) {
        if(i-(K-1) < 0 || i+(K-1) >= N) continue;

        bool check = true;

        for(int j=i-(K-1); j<i; j++)
            if(v[j] <= v[j+1]) check = false;

        for(int j=i; j<i+(K-1); j++)
            if(v[j] >= v[j+1]) check = false;

        if(check) b++;
    }

    cout << a << " " << b << "\n";
}
