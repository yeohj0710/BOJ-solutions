#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<str.length(); i++)
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
                string List = "AEIOUaeiou";

                bool check = false;
                for(int j=0; j<10; j++)
                    if(str[i] == List[j]) check = true;

                if(check) cnt2++;
                else cnt1++;
            }

        cout << cnt1 << " " << cnt2 << "\n";
    }
}
