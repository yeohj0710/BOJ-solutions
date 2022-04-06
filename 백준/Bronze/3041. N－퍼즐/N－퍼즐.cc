#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string List = "ABCDEFGHIJKLMNO";

    char Map[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) cin >> Map[i][j];
        cin.ignore();
    }

    int sum = 0;
    for(int i=0; i<List.size(); i++)
        for(int j=0; j<4; j++)
            for(int k=0; k<4; k++)
                if(Map[j][k] == List[i])
                    sum += abs(i/4 - j) + abs(i%4 - k);

    cout << sum;
}
