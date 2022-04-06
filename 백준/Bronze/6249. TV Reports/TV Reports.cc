#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, prev, Max; cin >> N >> prev >> Max;

    while(N--) {
        int value; cin >> value;

        if(value < prev) cout << "NTV: Dollar dropped by " << prev - value << " Oshloobs\n";
        if(value > Max) cout << "BBTV: Dollar reached " << value << " Oshloobs, A record!\n", Max = value;

        prev = value;
    }
}
