#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, time[3][2];
    cin >> A >> B >> C;
    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++) cin >> time[i][j];
    int fee = 0;
    for(int i=1; i<=100; i++) {
        int cnt = 0;
        for(int j=0; j<3; j++)
            if(i > time[j][0] && i <= time[j][1]) cnt++;
        if(cnt == 1) fee += A;
        else if(cnt == 2) fee += B*2;
        else if(cnt == 3) fee += C*3;
    }
    cout << fee;
}
