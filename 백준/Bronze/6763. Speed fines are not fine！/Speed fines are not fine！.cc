#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a >= b) printf("Congratulations, you are within the speed limit!");
    else if(b-a >= 31) printf("You are speeding and your fine is $500.");
    else if(b-a >= 21) printf("You are speeding and your fine is $270.");
    else printf("You are speeding and your fine is $100.");
}
