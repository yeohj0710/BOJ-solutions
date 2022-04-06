#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    while(1) {
        int sum = 0;
        char num[1005];
        scanf("%s", num);
        if(!strcmp(num, "0")) break;
        for(int i=0; i<strlen(num); i++) sum += num[i]-'0';
        while(sum >= 10) {
            int temp = sum;
            sum = 0;
            while(temp) {
                sum += temp%10;
                temp /= 10;
            }
        }
        printf("%d\n", sum);
    }
}
