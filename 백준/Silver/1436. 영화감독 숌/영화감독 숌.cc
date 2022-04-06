#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, check, i = 100, cnt = 0;
    string str;
    cin >> N;
    while(cnt < N) {
        i++;
        str = to_string(i);
        check = 0;
        for(int j=0; j<str.length()-2; j++) {
            if(str[j] == '6' && str[j+1] == '6' && str[j+2] == '6') {
                check = 1;
                break;
            }
        }
        if(check) cnt++;
    }
    printf("%d", i);
}
