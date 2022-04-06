#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<string> deck1(N), deck2(N);

        for(int i=0; i<N; i++) cin >> deck1[i];
        for(int i=0; i<N; i++) cin >> deck2[i];

        sort(deck1.begin(), deck1.end());
        sort(deck2.begin(), deck2.end());

        bool check = true;
        for(int i=0; i<N; i++)
            if(deck1[i] != deck2[i]) {
                check = false;
                break;
            }

        if(check) cout << "NOT CHEATER\n";
        else cout << "CHEATER\n";
    }
}
