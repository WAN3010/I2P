#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, idx = 0;
    int tmp[100];

    scanf("%d %d", &n, &m);

    while(m--) {
        if(n) {
            tmp[idx++] = n%3;
            n /= 3;
        } else {
            tmp[idx++] = 0;
        }
    }

    while(idx--) {
        printf("%d", tmp[idx]);
    }
    printf("\n");

    return 0;
}
