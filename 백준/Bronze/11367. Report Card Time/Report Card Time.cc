#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;
        int score; cin >> score;

        cout << str << " ";

        if(score >= 97) cout << "A+";
        else if(score >= 90) cout << "A";
        else if(score >= 87) cout << "B+";
        else if(score >= 80) cout << "B";
        else if(score >= 77) cout << "C+";
        else if(score >= 70) cout << "C";
        else if(score >= 67) cout << "D+";
        else if(score >= 60) cout << "D";
        else cout << "F";

        cout << "\n";
    }
}
