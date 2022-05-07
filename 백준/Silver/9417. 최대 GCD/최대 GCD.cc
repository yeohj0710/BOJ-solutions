#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        vector<int> arr;

        string str; getline(cin, str);

        string num = "";
        for(int i=0; i<str.length(); i++) {
            if(str[i] != ' ') num += str[i];
            else {
                arr.push_back(stoi(num));
                num = "";
            }
        }
        arr.push_back(stoi(num));

        sort(arr.begin(), arr.end(), greater<int>());

        int Max = 0;
        for(int i=0; i<arr.size(); i++)
            for(int j=i+1; j<arr.size(); j++) {
                int x = arr[i];
                int y = arr[j];

                while(y != 0) {
                    int temp = x % y;
                    x = y;
                    y = temp;
                }

                Max = max(Max, x);
            }

        cout << Max << "\n";
    }
}
