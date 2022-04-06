#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> setA(N), setB(M);

    for(int i=0; i<N; i++) cin >> setA[i];
    for(int i=0; i<M; i++) cin >> setB[i];

    sort(setA.begin(), setA.end());
    sort(setB.begin(), setB.end());

    int i = 0, j = 0, cnt = 0;
    vector<string> ansList;
    while(i < N && j < M) {
        if(setA[i] == setB[j]) {
            ansList.push_back(setA[i]);
            cnt++, i++, j++;
        }
        else if(setA[i] < setB[j]) i++;
        else if(setA[i] > setB[j]) j++;
    }

    cout << cnt << "\n";
    for(int i=0; i<ansList.size(); i++) cout << ansList[i] << "\n";
}
