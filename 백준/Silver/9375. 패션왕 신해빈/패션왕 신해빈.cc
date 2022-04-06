#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        map<string, int> cloth;
        for(int i=0; i<N; i++) {
            string name, type; cin >> name >> type;
            cloth[type]++;
        }

        int ans = 1;
        for(auto i=cloth.begin(); i!=cloth.end(); i++)
            ans *= i->second + 1;
        cout << ans - 1 << "\n";
    }
}
