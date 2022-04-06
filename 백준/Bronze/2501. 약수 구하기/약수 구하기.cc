#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=a; j++) {
            if(i*j == a) {
                cnt++;
                if(cnt == b) {
                    printf("%d", i);
                    return 0;
                }
            }
        }
    }
    printf("0");
}
