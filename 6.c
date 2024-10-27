#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = (int)pow(2, n);
    int b = 100000 * n;

    printf("%d %d\n", b, a);
    return 0;
}