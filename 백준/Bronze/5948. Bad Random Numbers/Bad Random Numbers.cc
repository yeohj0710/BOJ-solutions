#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;
    vector<int> List;
    while(true) {
        List.push_back(N);
        cnt++;

        N = pow((N/10)%100, 2);

        bool check = false;
        for(int i=0; i<List.size(); i++)
            if(N == List[i]) check = true;

        if(check) break;
    }

    cout << cnt;
}
