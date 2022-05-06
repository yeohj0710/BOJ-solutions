#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int cnt = 0;

    while(true) {
        string str; getline(cin, str);

        if(str == "고무오리 디버깅 시작") continue;
        else if(str == "문제") cnt++;
        else if(str == "고무오리") {
            if(cnt != 0) cnt--;
            else cnt += 2;
        }
        else if(str == "고무오리 디버깅 끝") break;
    }

    if(cnt == 0) cout << "고무오리야 사랑해\n";
    else cout << "힝구\n";
}
