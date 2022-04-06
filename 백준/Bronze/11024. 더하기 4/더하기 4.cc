#include <cstdio>
using namespace std;

int main() {
    int T, Value;
    char C;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        int Sum = 0;
        while(1) {
            scanf("%d", &Value);
            Sum += Value;
            scanf("%c", &C);
            if(C == '\n') break;
        }
        printf("%d\n", Sum);
    }
}
