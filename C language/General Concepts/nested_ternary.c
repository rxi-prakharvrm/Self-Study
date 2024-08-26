#include <stdio.h>
#define PI 3.14

int main(){
    int a = 10, b = 20, c = 30, d = 40;
    // int d = (a > b) ? (b > c) ? c : b : (c > a) ? c : a;
    // int d = (a > b) ? ((b > c) ? c : b) : ((c > a) ? c : a);
    int ans = (a < b) ? ((b < c) ? ((c < d) ? d : c) : b) : a;
    printf("%d\n", ans);
    return 0;
}