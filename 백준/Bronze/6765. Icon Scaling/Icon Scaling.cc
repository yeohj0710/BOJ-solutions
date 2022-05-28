#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string v[3] = {"*x*", " xx", "* *"};

    int N; cin >> N;

    for(int i=0; i<3; i++)
        for(int j=0; j<N; j++) {
            for(int k=0; k<3; k++)
                for(int l=0; l<N; l++) cout << v[i][k];
            cout << "\n";
        }
}
