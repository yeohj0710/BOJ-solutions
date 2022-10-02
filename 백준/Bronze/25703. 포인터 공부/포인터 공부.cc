#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    cout << "int a;\n";

    for(int i=1; i<=N; i++) {
        if(i == 1) cout << "int *ptr = &a;\n";
        else if(i == 2) cout << "int **ptr2 = &ptr;\n";
        else {
            cout << "int ";

            for(int j=1; j<=i; j++) cout << "*";

            cout << "ptr" << i << " = &ptr" << i-1 << ";\n";
        }
    }
}
