#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> Pair;

bool cmp(Pair &a, Pair &b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K, L; cin >> K >> L;

    map<string, int> Map; // <student id, order>

    for(int i=1; i<=L; i++) {
        string id; cin >> id;

        Map[id] = i;
    }

    vector<Pair> List(Map.begin(), Map.end());
    sort(List.begin(), List.end(), cmp);

    int Size = min(K, (int)List.size());
    for(int i=0; i<Size; i++)
        cout << List[i].first << "\n";
}
