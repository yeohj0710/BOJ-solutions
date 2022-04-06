#include <bits/stdc++.h>
using namespace std;

typedef pair<double, string> Pair;

bool compare(Pair &a, Pair &b) {
    return a.first > b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        vector<Pair> List(N);
        for(int i=0; i<N; i++)
            cin >> List[i].second >> List[i].first;
        sort(List.begin(), List.end(), compare);

        cout << List[0].second;
        if(N == 1) continue;

        int i = 1;
        while(List[i].first == List[i-1].first) {
            cout << " " << List[i].second;
            i++;
        }
        cout << "\n";
    }
}
