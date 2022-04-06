#include <cstdio>
using namespace std;

int main() {
    int n, input;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &input);
        long long a = 1;
        int check = 0;
        while(a <= input && a <= 2147483647) {
            if(a == input) {
                check = 1;
                break;
            }
            a *= 2;
        }
        printf("%d\n", check);
    }
}
