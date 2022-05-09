#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v;

    int x = 0, y = 0;

    for(int i=1; i<=720; i++) {
        if(x % 12 == 0) x++;
        y = (y + 1) % 60;

        int angle = abs(x - y) * 6;
        if(angle > 180) angle = 360 - angle;

        v.push_back(angle);
    }

    sort(v.begin(), v.end());

    int N;

    while(cin >> N) {
        bool check = false;
        for(int i=0; i<v.size(); i++)
            if(v[i] == N) check = true;

        if(check) cout << "Y\n";
        else cout << "N\n";
    }
}

