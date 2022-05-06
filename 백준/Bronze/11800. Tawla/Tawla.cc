#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a[] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
    string b[] = {"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ": ";

        int x, y; cin >> x >> y;
        if(x < y) swap(x, y);

        if(x == 6 && y == 5) cout << "Sheesh Beesh\n";
        else if(x == y) cout << b[x] << "\n";
        else cout << a[x] << " " << a[y] << "\n";
    }
}
