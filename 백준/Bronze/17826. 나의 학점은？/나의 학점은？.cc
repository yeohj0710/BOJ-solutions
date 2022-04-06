#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int score[50];
    for(int i=0; i<50; i++) cin >> score[i];

    sort(score, score+50, greater<int>());

    int value; cin >> value;
    for(int i=0; i<50; i++) {
        if(value == score[i]) {
            i++;
            if(i >= 1 && i <= 5) cout << "A+";
            else if(i >= 6 && i <= 15) cout << "A0";
            else if(i >= 16 && i <= 30) cout << "B+";
            else if(i >= 31 && i <= 35) cout << "B0";
            else if(i >= 36 && i <= 45) cout << "C+";
            else if(i >= 46 && i <= 48) cout << "C0";
            else if(i >= 49 && i <= 50) cout << "F";
            return 0;
        }
    }
}
