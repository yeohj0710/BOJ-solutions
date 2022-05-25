#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int x, y; string dir1, dir2;
    cin >> x >> dir1 >> y >> dir2;

    int a = 0, b = 0;

    if(dir1 == "left")
        for(int i=x-1; i>=0; i--) a += v[i];
    else
        for(int i=x-1; i<N; i++) a += v[i];

    if(dir2 == "left") {
        for(int i=y-1; i>=0; i--)
            if(v[i] == 0) b++;
    }
    else {
        for(int i=y-1; i<N; i++)
            if(v[i] == 0) b++;
    }

    cout << a << " " << b << "\n";
}
