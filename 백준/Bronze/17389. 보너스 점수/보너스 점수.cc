#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int score = 0, bonus = 0;
    for(int i=1; i<=N; i++) {
        char c; cin >> c;
        if(c == 'O') {
            score += i + bonus;
            bonus++;
        }
        else bonus = 0;
    }
    cout << score;
}
