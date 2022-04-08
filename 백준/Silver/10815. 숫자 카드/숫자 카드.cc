#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> card(N);
    for(int i=0; i<N; i++) cin >> card[i];
    sort(card.begin(), card.end());

    int M; cin >> M;
    while(M--) {
        int input; cin >> input;

        if(upper_bound(card.begin(), card.end(), input) - lower_bound(card.begin(), card.end(), input) > 0) cout << "1 ";
        else cout << "0 ";
    }
}
