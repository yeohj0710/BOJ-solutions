#include<stdio.h>
#include<math.h>

int main() {
    int T, x, y, temp, root;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d", &x, &y);
        if(x > y) {
            temp = x;
            x = y;
            y = temp;
        }
        root = sqrt(y-x);
        if(y-x == root*root) printf("%d\n", 2*root-1);
        else if(y-x > root*(root+1)) printf("%d\n", 2*root+1);
        else printf("%d\n", 2*root);
    }
}
