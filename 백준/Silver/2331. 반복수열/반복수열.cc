#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int A, P; cin >> A >> P;

    vector<int> List;
    List.push_back(A);

    while(true) {
        string str = to_string(List[List.size()-1]);

        int sum = 0;
        for(int i=0; i<str.length(); i++) {
            int temp = 1;
            for(int j=0; j<P; j++) temp *= (str[i] - '0');
            sum += temp;
        }

        for(int i=0; i<List.size(); i++)
            if(sum == List[i]) {
                cout << i;
                return 0;
            }

        List.push_back(sum);
    }
}
