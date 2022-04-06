#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> setA(N), setB(M);

    for(int i=0; i<N; i++) cin >> setA[i];
    for(int i=0; i<M; i++) cin >> setB[i];

    sort(setA.begin(), setA.end());
    sort(setB.begin(), setB.end());

    int i = 0, j = 0, cnt = 0;
    while(i < setA.size() && j < setB.size()) {
        if(setA[i] < setB[j]) cnt++, i++;
        else if(setA[i] > setB[j]) cnt++, j++;
        else i++, j++;
    }

    if(i == setA.size()) cnt += setB.size() - j;
    if(j == setB.size()) cnt += setA.size() - i;

    cout << cnt;
}
