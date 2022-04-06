#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        vector<pair<string, string>> List(N);
        for(int i=0; i<N; i++) {
            cin >> List[i].second;
            List[i].first = "";
            for(int j=0; j<List[i].second.length(); j++) {
                if(List[i].second[j] >= 'A' && List[i].second[j] <= 'Z')
                    List[i].first += char(List[i].second[j] + 'a' - 'A');
                else List[i].first += List[i].second[j];
            }
        }

        sort(List.begin(), List.end());
        cout << List[0].second << "\n";
    }
}
