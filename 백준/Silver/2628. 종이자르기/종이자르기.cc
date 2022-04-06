#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> cutLine[2];
    cutLine[0].push_back(0), cutLine[0].push_back(M);
    cutLine[1].push_back(0), cutLine[1].push_back(N);

    while(K--) {
        int type, num; cin >> type >> num;
        cutLine[type].push_back(num);
    }

    sort(cutLine[0].begin(), cutLine[0].end());
    sort(cutLine[1].begin(), cutLine[1].end());

    int height = 0, width = 0;
    for(int i=1; i<cutLine[0].size(); i++)
        height = max(height, cutLine[0][i] - cutLine[0][i-1]);
    for(int i=1; i<cutLine[1].size(); i++)
        width = max(width, cutLine[1][i] - cutLine[1][i-1]);

    cout << height * width;
}
