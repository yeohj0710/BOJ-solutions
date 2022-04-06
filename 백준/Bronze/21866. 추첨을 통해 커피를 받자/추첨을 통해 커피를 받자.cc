#include <bits/stdc++.h>
using namespace std;

int main() {
    int score[10], cut[10] = {0, 100, 100, 200, 200, 300, 300, 400, 400, 500}, sum = 0;
    bool hacker = false;
    for(int i=1; i<=9; i++) {
        cin >> score[i];
        sum += score[i];
        if(score[i] > cut[i]) hacker = true;
    }
    if(sum < 100) cout << "none";
    else if(hacker) cout << "hacker";
    else cout << "draw";
}
